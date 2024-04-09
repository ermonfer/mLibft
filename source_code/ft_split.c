/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:44:44 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/09 20:35:18 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c);
static char		*copying_words(char const *s, char **result, int len);

char	**ft_split(char const *s, char c)
{
	char			**result;
	int				words;

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
	int		words;
	int		in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s++ == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			words++;
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
		result[i] = ft_substr(s, 0, word_end - s);
		if (result[i++] == NULL)
			return (NULL);
		while (*++word_end == c)
			;
		s = word_end;
	}
	return (result);
}
