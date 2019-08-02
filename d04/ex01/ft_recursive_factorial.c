/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:58:52 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/13 23:15:49 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int n;
	long f;
	
	if (nb < 0)
	{
		return(0); 
   	} else	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * nb - 1);
		}
	}
	return (nb);
}
