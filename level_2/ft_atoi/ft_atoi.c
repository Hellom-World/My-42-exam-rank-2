/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:36:56 by heolivei          #+#    #+#             */
/*   Updated: 2023/02/26 19:11:36 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long int	number = 0;
	int 	flag = 1;
	int	i = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		flag = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return((int)(flag * number));
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "12345";
    char str2[] = "-6789";
    char str3[] = "    42";
    char str4[] = "words 123";
    char str5[] = "2147483648";
    char str6[] = "-2147483649";

    printf("%d\n", ft_atoi(str1)); // Esperado: 12345
    printf("%d\n", ft_atoi(str2)); // Esperado: -6789
    printf("%d\n", ft_atoi(str3)); // Esperado: 42
    printf("%d\n", ft_atoi(str4)); // Esperado: 0
    printf("%d\n", ft_atoi(str5)); // Esperado: 2147483647 (overflow)
    printf("%d\n", ft_atoi(str6)); // Esperado: -2147483648 (underflow)

    return 0;
}

