/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emendes- <emendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:47:50 by emendes-          #+#    #+#             */
/*   Updated: 2021/04/16 03:53:25 by emendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("\"%s\" -> ", (char *)list->data);
		list = list->next;
	}
	printf("NULL\n");
}

int		main(void)
{
	t_list *list;
	t_list *list2;

	list = ft_create_elem("blablabla");
	print_list(list);
	list2 = ft_create_elem("");
	print_list(list2);
}
