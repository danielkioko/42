/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:03:13 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/13 20:21:18 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
    int c = 2;

	while(c < nb - 1) 
	
	{
		if (nb % c == 0)
		{
			return(0);
			break;
		}
	}

	if (c == nb)
	{
		return(1);
	}

	return(0);
}