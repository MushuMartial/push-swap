/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:19:14 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/28 12:38:17 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

unsigned int	ft_strlen(char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strdup(char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		res = malloc(sizeof(char) * 1);
	else if (ft_strlen(s) - start < len)
		res = malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (len > j && s[i] != '\0' && start < ft_strlen(s))
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}

unsigned int	pos_n(char *buffer)
{
	unsigned int	n;

	n = 0;
	while (buffer[n] != '\0')
	{
		if (buffer[n] == '\n')
		{
			n++;
			return (n);
		}
		n++;
	}
	return (n);
}