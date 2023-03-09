#include <string.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i = -1;
	int	len = 0;
	char	temp;

	while (str[len])
		len++;
	while (++i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
	return (str);
}

int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hellom Word is awesome!";
    char str3[] = "";
    char str4[] = "a";
    char str5[] = "bb";
    char str6[] = "socorram me subi no onibus em marrocos";

    printf("Original strings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    printf("str5: %s\n", str5);
    printf("str6: %s\n", str6);

    // Testando a sua função ft_strrev
    ft_strrev(str1);
    ft_strrev(str2);
    ft_strrev(str3);
    ft_strrev(str4);
    ft_strrev(str5);
    ft_strrev(str6);

    printf("\nStrings after applying ft_strrev:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    printf("str5: %s\n", str5);
    printf("str6: %s\n", str6);

    return 0;
}
