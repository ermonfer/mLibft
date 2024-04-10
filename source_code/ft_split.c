/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:44:44 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/10 01:54:28 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c);
static char		**copy_words(char const *s, char c, char **result, int len);

char	**ft_split(char const *s, char c)
{
	char			**result;
	int				words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof (char *));
	if (result == NULL)
		return (NULL);
	if (copy_words(s, c, result, words) == NULL)
	{
		free(result);
		return (NULL);
	}
	result[words] = NULL;
	return (result);
}

static int	count_words(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
{
		if (*s == c)
			s++;
		else
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

static char	**copy_words(char const *s, char c, char **result, int len)
{
	char const	*word_end;
	int			i;

	i = 0;
	if (*s == c)
		s++;
	while (i < len)
	{	
		word_end = ft_strchr(s, c);
		if (word_end == NULL)
			ft_strchr(s, c);
		result[i] = ft_substr(s, 0, word_end - s);
		if (result[i++] == NULL)
		{
			while (--i >= 0)
				free(result[i]);
			return (NULL);
		}
		while (*++word_end == c)
			;
		s = word_end;
	}
	return (result);
}
