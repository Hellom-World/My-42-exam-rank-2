/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:23:25 by heolivei          #+#    #+#             */
/*   Updated: 2023/02/25 18:38:43 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int number)
{
	char	*str = "0123456789";

	if (number > 10)
		ft_print_number(number / 10);
	write(1, &str[number % 10], 1);
}

int	main(int argc, char **argv)
{
	int	n = 1;

	while (n <= 100)
	{
		if(n % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print_number(n);
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
