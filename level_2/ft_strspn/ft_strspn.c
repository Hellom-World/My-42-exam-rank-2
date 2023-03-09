/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:39:53 by heolivei          #+#    #+#             */
/*   Updated: 2023/03/02 16:02:37 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	str_comp_char(const char *str, char c)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;

	while (s[i])
	{
		if (str_comp_char(accept, s[i]) == 0)
			break;
		i++;
	}

	return (i);
}

#include <stdio.h>

int main(void)
{
    char *s = "aaalo";
    char *accept = "hello";
    size_t result1 = strspn(s, accept);
    size_t result2 = ft_strspn(s, accept);

    printf("Result1 (strspn): %zu\n", result1);
    printf("Result2 (ft_strspn): %zu\n", result2);

    return 0;
}
