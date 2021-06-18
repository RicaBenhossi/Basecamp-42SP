#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main ()
{
	char	phrase[57] = "oi, TUDO bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	ft_strcapitalize(phrase);
	printf("Processed -> %s\n", phrase);
	printf("Default	  -> Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um\n");

	return (0);
}