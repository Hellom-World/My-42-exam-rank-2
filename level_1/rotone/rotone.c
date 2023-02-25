/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:22:15 by heolivei          #+#    #+#             */
/*   Updated: 2023/02/25 19:42:04 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
		else if(str[i] == 'Z')
			str[i] = 'A';
		else if(str[i] == 'z')
                        str[i] = 'a';
		write(1, &str[i], 1);
		i++;

	}
}

int	main(int argc, char **argv)
{

	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
