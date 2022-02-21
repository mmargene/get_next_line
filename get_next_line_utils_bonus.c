/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmargene <mmargene@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:23:21 by mmargene          #+#    #+#             */
/*   Updated: 2022/02/22 02:24:17 by mmargene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen (char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin (char *s1, char *s2, int f)
{
	char	*new;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	if (s2 != NULL)
		len += ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	if (f == 1)
		free(s1);
	if (s2 != NULL)
	{
		while (*s2 != '\0')
			new[i++] = *s2++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strdup_n(char *buf, int b_read)
{
	int		i;
	char	*new;

	i = 0;
	new = malloc (sizeof(char) * (b_read + 1));
	if (!new)
		return (NULL);
	while (buf[i] != '\n')
	{
		new[i] = buf[i];
		i++;
	}
	new[i] = '\n';
	new[i + 1] = '\0';
	return (new);
}

int	ft_strchrINT (const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	if (c != '\0')
		return (0);
	return (0);
}

char	*ft_free(char *one, char *two, char *three)
{
	if (one != NULL)
		free(one);
	if (two != NULL)
		free(two);
	if (three != NULL)
		free(three);
	return (0);
}
