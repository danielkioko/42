/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:28:26 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/13 16:40:57 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

void ft_sqrt(int);

void ft_sqrt(int nb) {
    
    double value;
    double result;
    value = nb;

    result = sqrt(value);

    printf("%f\n", result);
}

int main() {
    ft_sqrt(100);
}

