/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:38:15 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:38:16 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_memdel(void **ap)
{
    if (ap == NULL || *ap == NULL)
        return ;
    free(*ap);
    *ap = NULL;
}
