/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:20:09 by heolivei          #+#    #+#             */
/*   Updated: 2023/02/26 19:28:09 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{

	char str1[] = "hello";
   	char str2[] = "world";
   	char str3[] = "hello";
   	char str4[] = "HELLO";
   	char str5[] = "";

   	printf("strcmp:\n");
   	printf("%d\n", strcmp(str1, str2)); // Esperado: negativo
   	printf("%d\n", strcmp(str2, str1)); // Esperado: positivo
   	printf("%d\n", strcmp(str1, str3)); // Esperado: zero
   	printf("%d\n", strcmp(str1, str4)); // Esperado: positivo
   	printf("%d\n", strcmp(str1, str5)); // Esperado: positivo (nulo)

   	printf("\nft_strcmp:\n");
   	printf("%d\n", ft_strcmp(str1, str2)); // Esperado: negativo
   	printf("%d\n", ft_strcmp(str2, str1)); // Esperado: positivo
   	printf("%d\n", ft_strcmp(str1, str3)); // Esperado: zero
   	printf("%d\n", ft_strcmp(str1, str4)); // Esperado: positivo
	printf("%d\n", ft_strcmp(str1, str5)); // Esperado: positivo (nulo)

    return 0;
}
