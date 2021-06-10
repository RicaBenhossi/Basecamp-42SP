#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main ()
{
	char	phrase[100] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	ft_strcapitalize(phrase);
	printf("%s\n", phrase);
	printf("Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um\n");

}