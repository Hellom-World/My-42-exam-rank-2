/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:23:25 by heolivei          #+#    #+#             */
/*   Updated: 2023/02/25 20:56:05 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i = 0;
	int	flag = 1;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			flag += str[i] - 'a';
			while(flag > 0)
			{
				write(1, &str[i], 1);
				flag--;
			}
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
                {
                        flag += str[i] - 'A';
                        while(flag > 0)
                        {
                                write(1, &str[i], 1);
                                flag--;
                        }
                }
		flag = 1;
		i++;

	}
}

int	main(int argc, char **argv)
{
	if( argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
