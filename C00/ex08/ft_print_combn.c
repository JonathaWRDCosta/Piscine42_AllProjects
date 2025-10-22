/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathro <jonathro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 02:15:20 by jonathro          #+#    #+#             */
/*   Updated: 2025/10/22 02:52:17 by jonathro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_next_comb(char *array, int n)
{
	int	i;

	i = n - 1;
	while (i >= 0 && array[i] == (10 - n + i) + '0')
		i--;
	if (i >= 0)
	{
		array[i]++;
		while (++i < n)
			array[i] = array[i - 1] + 1;
	}
}

int	ft_is_last_comb(char *array, int n)
{
	int	start;
	int	i;

	start = 10 - n;
	i = 0;
	while (i < n)
	{
		if (array[i] != start + i + '0')
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_array(char *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &array[i], 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	i = 0;
	if (n <= 0 || n >= 10)
		return ;
	while (i < n)
	{
		comb[i] = i + '0';
		i++;
	}
	while (1)
	{
		ft_print_array(comb, n);
		if (ft_is_last_comb(comb, n))
			break ;
		write(1, ", ", 2);
		ft_next_comb(comb, n);
	}
}
