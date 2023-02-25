/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:46:01 by heolivei          #+#    #+#             */
/*   Updated: 2023/02/25 19:56:19 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	while (len-- > 0)
		write(1, &str[len], 1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
