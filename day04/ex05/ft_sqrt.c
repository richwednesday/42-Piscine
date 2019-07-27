/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:44:55 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/13 23:37:46 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int start;
	int end;
	int ans;

	if (nb == 0 || nb == 1)  
       return nb; 
  
    start = 1;
	end = nb;

    while (start <= end)  
    {         
        int mid = (start + end) / 2; 
  
        if (mid*mid == nb)
		{
            return mid; 
  		}
        if (mid*mid < nb)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else
		{
            end = mid - 1;
   		}			
    } 
    return ans;
}

int		main(void)
{
	printf("%d \n", ft_sqrt(2000000000));
}
