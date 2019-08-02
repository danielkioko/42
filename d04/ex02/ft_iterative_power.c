/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:16:53 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/13 23:41:25 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power) {

	int nb, power;
	long result;
	
	result = 1;
	while (power != 0)
	{
		result *= nb;
		--power;
	}
	return(result);
}
