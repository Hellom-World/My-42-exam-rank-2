/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:52:55 by heolivei          #+#    #+#             */
/*   Updated: 2023/03/02 18:03:27 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	len = 0;
	char	*str;

	while (src[len])
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str)
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "Hello, world!";
    char *new_str;

    new_str = ft_strdup(str);
    printf("Original string: %s\n", str);
    printf("Duplicated string: %s\n", new_str);

    free(new_str);

    return 0;
}
