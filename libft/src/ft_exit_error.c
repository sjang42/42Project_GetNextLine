/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 02:41:20 by sjang             #+#    #+#             */
/*   Updated: 2016/11/26 02:41:21 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_exit_error(char *error)
{
    write(2, "Error", 5);
    if (error)
    {
        write(2, " : ", 3);
        write(2, error, ft_strlen(error));
    }
    write(2, "\n", 1);
    exit(-1);
}
