/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luricard <luricard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:03:15 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/06/16 20:15:01 by luricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	// if (strs == NULL)
	// 	return (1);
	// offset = 0;
	// while (offset < 3)
	// {
	// 	strs[offset] = "abc";
	// 	offset++;
	// }
	// res_str = ft_strjoin(3, strs, ", ");
	// if (res_str == NULL)
	// 	return (1);
	// printf("res: %s\n", res_str);
	res_str = ft_strjoin(0, strs, ", ");
	free(strs);
	free(res_str);
	return (0);
}
