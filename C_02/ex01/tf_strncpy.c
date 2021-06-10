// #include <stdio.h>
// #include <string.h>

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		// printf("%c\n", str[i]);
// 		i++;
// 	}
// 	// printf("%d\n", i);
// 	return i;
// }

// char	*ft_strncpy(char *dest, char *src, unsigned int n)
// {
// 	unsigned int	i;
// 	unsigned int	len_src;
// 	unsigned int	len_dest;

// 	len_src = ft_strlen(src);  
// 	len_dest = ft_strlen(dest);  

// 	if (len_src > len_dest)
// 	{
// 		return dest;
// 	}
	
// 	// len_src = 4;
// 	i = 0;	// 
// 	while (i < len_src)  // len_src = 4
// 	{
// 		// todo: checar se o n é menor que length senão ele não corta.
// 		dest[i] = src[i];  //dest = 
// 		i++;
// 	}
// 	// printf("%s\n", dest);
// 	while (i < n) //n  6
// 	{
//         dest[i] = '\0';
//         i++;
//     }
// 	// printf("%s\n", dest);
// 	return dest;
// }

// int main ()
// {
// 	char	strorigin[10] = "test";
// 	char	strdest [6] = "";
// 	int		count = 6;

// 	// count = 5;
// 	// while (strorigin[count] != '\0')
// 	// 	count ++;
// 	// count++;

// 	ft_strncpy(strdest, strorigin, count);
// 	printf("%s\n", strdest);

// }

// int    main(void)
// {
//     char original[4] = "TEST";
// 	int a = 1;
//     char copied[4] = "";
//     // char original2[4] = "TEST";
//     // char copied2[4] = "1111";
//     int size = 4;
// 	a++;

//     // char *strcpy(char *dest, const char *src);


//     printf("   OUR STRNCPY: %s", ft_strncpy(copied, 
// 										 original, 
// 										 size));
//     printf("\n");
//     printf("COPIED STRNCPY: %s", strncpy(copied, 
// 										 original, 
// 										 size));
//     printf("\n");

//     return (0);
// }

// int    main(void)
// {
//     char original[11] = "HELLO HELLO";
//     char copied[12] = "";
//     int size = 4;

//     // char *strcpy(char *dest, const char *src);

//     printf("OUR STRNCPY: %s", ft_strncpy(copied, original, size));
//     printf("\n");

//     printf("COPIED STRNCPY: %s", strncpy(copied, original, size));
//     printf("\n");

//     return (0);
// }










#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;
    // unsigned int  	len_src;
    // unsigned int  	len_dest;
	// unsigned int iter = 0;

	// TODO-1: validar src menor que dest -> return
	// TODO-2: validar se src < que n -> iterar pelo src
	// TODO-3: validar se src > n -> iterar pelo n
	// TODO-4: validar se n <= 0 -> return
	
	// len_src = ft_strlen(src);
	// len_dest = ft_strlen(dest);


	// validação do n menor que 0 (TODO-4)
	// if (n > len_src) 
	// if (n > 2147483647) 
	// {
	// 	printf("%u\n", n);
	// 	return dest;
	// }

    i = 0; 
    while (i < n)
	{ 
        dest[i] = src[i];
        i++;
    }
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
    return dest;
}

int    main()
{
	// tem que contar +1 pois tem o '\0' no final. senão corta
    char src[6] = "teste";
    char cpy[5];
	int count = 0;

    ft_strncpy(cpy, src, 6);
    printf("%s\n", cpy);
	while (count < 6)
	{
		printf("%c", cpy[count]);
		count++;
	}
}