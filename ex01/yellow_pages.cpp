/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yellow_pages.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:13:18 by math42            #+#    #+#             */
/*   Updated: 2024/05/05 14:09:43 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yellow_pages.hpp"

static void	header(void)
{
	std::string	sep = " | ";

	std::cout
			<< std::setw(10) << "INDEX" << sep
			<< std::setw(10) << "NAME" << sep
			<< std::setw(10) << "LAST NAME" << sep
			<< std::setw(10) << "SECRET" << std::endl;
}

int main()
{
	PhoneBook	yellow_page;
	std::string	entry;

	do
	{
		std::cout << "Waiting action: ";
		std::cin >> entry;
		if (std::cin.fail())
			return (0);
		if (entry == "ADD")
		{
			yellow_page.add_contact();
		}
		else if (entry == "SEARCH")
		{
			header();
			yellow_page.list_contact();
			std::cout << "Contact name: ";
			std::cin >> entry;
			yellow_page.search_contact(entry);
		}
		else if (entry == "LIST")
			yellow_page.list_contact();
		else if (entry != "EXIT")
		{
			std::cout << "Invalid action, try again" << std::endl;
		}
	} while (entry != "EXIT");
	return (0);
}
