/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:35:51 by math42            #+#    #+#             */
/*   Updated: 2024/04/25 16:25:09 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int i;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		int j= -1;
		while (argv[i][++j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				argv[i][j] += 'A' - 'a';
			}
		}
	}
	i = 0;
	while (++i < argc)
		std::cout << argv[i];
	std::cout << std::endl;
	return (0);
}
