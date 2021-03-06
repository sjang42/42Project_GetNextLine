/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:22:49 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:22:50 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (1)
    {
        if (s[i] == c)
            return ((char*)s + i);
        else if (s[i] == 0)
            return (NULL);
        i++;
    }
}
