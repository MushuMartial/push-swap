/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_gnl_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:19:14 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 14:54:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	int				i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (n > i && (ptr_s1[i] || ptr_s2[i]))
	{
		if (ptr_s1[i] != ptr_s2[i])
		{
			if (ptr_s1[i] > ptr_s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
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

char	*ft_substr(char *s, int start, int len)
{
	int		i;
	int		j;
	char	*res;

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

int	pos_n(char *buffer)
{
	int	n;

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
