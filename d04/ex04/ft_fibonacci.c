/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:16:50 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/13 16:47:10 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_fibonacci(int);

int main() {

    ft_fibonacci(100);
    
}
void ft_fibonacci(int n) {

    int first = 0, second = 1, next, c = 0;

    while(c < n) {

        if (c <= 1){

            next = c;

        } else {

            next = first + second;
            first = second;
            second = next;
            
        }

        c++;

        printf("%d\n", next);

    }

    // for (c = 0; c < n; c++) {

        
        
        
        
    // }

}