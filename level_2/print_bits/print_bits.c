#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

#include <stdio.h>

int	main(void)
{
	unsigned char byte = 0xA7;

	printf("Valor em binario do byte 0x%X eh: ", byte);
	printf("\n");
	print_bits(byte);
	printf("\n");
	return (0);
}
