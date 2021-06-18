/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:11:30 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/15 20:25:04 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -20, '\0'};

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	printf("cmp_1x1 = %d\t -> og_cmp_1x1 = %d\n", ft_strcmp(s1, s1), strcmp(s1, s1));
	printf("cmp_1x2 = %d\t -> og_cmp_1x2 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_1x3 = %d\t -> og_cmp_1x3 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_1x4 = %d\t -> og_cmp_1x4 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("cmp_1x5 = %d\t -> og_cmp_1x5 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	return(0);
}
