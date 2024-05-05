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

int main()
{
	PhoneBook	yellow_page;
	std::string	entry;

	do
	{
		std::cout << "Waiting action: ";
		std::cin >> entry;
		if (entry == "ADD")
		{
			yellow_page.add_contact();
		}
		else if (entry == "SEARCH")
		{
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
