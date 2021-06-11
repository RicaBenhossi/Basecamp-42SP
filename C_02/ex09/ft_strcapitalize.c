#include <stdio.h>
#include <time.h>
int	ft_char_is_alpha(char character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	return (0);
}

int	ft_char_is_number(char character)
{
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (i == 1 && ft_char_is_alpha(str[i - 1]))
		{
			str[i - 1] = str[i - 1] - 32;
			i++;
			continue ;
		}
		if (!ft_char_is_alpha(str[i]))
		{
			if (!ft_char_is_number(str[i - 1]) && 
				!ft_char_is_alpha(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}


int main(void)
{

    clock_t time;
	char	phrase[505] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"; 
    time = clock(); 

    ft_strcapitalize(phrase);

    time = clock() - time;
    double time_taken = ((double)time)/CLOCKS_PER_SEC;

    printf(" - A função my_function() levou %f segundos para executar.\n", time_taken);
}