/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:02:55 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:02:56 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_putendl(char const *s)
{
    int i;

    if (s == NULL)
        return ;
    i = 0;
    while (s[i] != 0)
    {
        write(1, s + i, 1);
        i++;
    }
    write(1, "\n", 1);
}
