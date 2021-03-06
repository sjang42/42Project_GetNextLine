/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 20:39:53 by sjang             #+#    #+#             */
/*   Updated: 2016/09/26 20:39:54 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_lstadd(t_list **alst, t_list *new)
{
    if (alst == NULL || new == NULL)
        return ;
    new->next = *alst;
    *alst = new;
}
