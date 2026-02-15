/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:34:24 by yikeda            #+#    #+#             */
/*   Updated: 2026/02/11 15:42:45 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cnt_w(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

static char	**ft_free_all(char **lst, size_t i)
{
	if (!lst)
		return (NULL);
	while (i > 0)
	{
		i--;
		free(lst[i]);
	}
	free(lst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**lst;
	size_t		i;
	const char	*start;

	if (!s)
		return (NULL);
	lst = (char **)ft_calloc((cnt_w(s, c) + 1), sizeof(char *));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		start = s;
		while (*s && *s != c)
			s++;
		lst[i] = ft_substr(start, 0, s - start);
		if (!lst[i])
			return (ft_free_all(lst, i));
		i++;
	}
	return (lst);
}
