int	ft_strlen(char *str)
{
	int	len = 0;

	while(str[len])
		len++;

	return (len);
}

/*#include <stdio.h>
int	main()
{
	char	*str = "0123456789";

	printf("%d\n", ft_strlen(str));
	return (0);
}*/
