/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:56:57 by heolivei          #+#    #+#             */
/*   Updated: 2023/03/02 18:57:00 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;

	if (!s1 || !s2)
		return (0);

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *) s1);
			i++;
		}
		s1++;
	}
	return (0);
}

int	main(void)
{
	char	*s1 = "Hello, World!";
	char	*s2 = "Wd";

	char	*result1 = strpbrk(s1, s2);
	char    *result2 = ft_strpbrk(s1, s2);

	printf("resultado do strpbrk: %s\n", result1);
	printf("resultado do ft_strpbrk: %s\n", result2);
	return (0);
}
