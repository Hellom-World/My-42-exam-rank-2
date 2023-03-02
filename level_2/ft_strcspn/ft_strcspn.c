/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:05:15 by heolivei          #+#    #+#             */
/*   Updated: 2023/03/02 16:18:24 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int main(void)
{
    char *s = "aaalo";
    char *reject = "hello";
    size_t result1 = strcspn(s, reject);
    size_t result2 = ft_strcspn(s, reject);

    printf("Result1 (strspn): %zu\n", result1);
    printf("Result2 (ft_strspn): %zu\n", result2);

    return 0;
}

