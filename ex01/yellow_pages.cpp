/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yellow_pages.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:13:18 by math42            #+#    #+#             */
/*   Updated: 2023/09/03 19:27:40 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	long int	phone_number;
	std::string	darkest_secret;

	public:
		void new_c()
		{
			std::cout << "First name:";
			std::cin >> first_name;
			std::cout << "Last name:";
			std::cin >> last_name;
			std::cout << "Nickname:";
			std::cin >> nickname;
			std::cout << "Phone number:";
			std::cin >> phone_number;
			std::cout << "Darkest secret:";
			std::cin >> darkest_secret;
		}
		void print_contact()
		{
			std::cout << first_name + " | " + last_name << std::endl;
		}
		std::string	get_name()
		{
			return (first_name);
		}
};

class PhoneBook
{
	Contact contacts[8];
	int		n_contacts;
	public:
		PhoneBook()
		{
			n_contacts = 8;
		}
		void add_contact()
		{
			contacts[n_contacts % 8].new_c();
			n_contacts++;
		}
		void search_contact(std::string name)
		{
			int size;

			if (n_contacts > 15)
				size = 8;
			else
				size = n_contacts % 8;
			for (int i = 0; i < size; i++)
			{
				if (contacts[i].get_name() == name)
				{
					contacts[i].print_contact();
					break;
				}
				std::cout << "Contact not found!";
			}
		}
};

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
		else if (entry != "EXIT")
		{
			std::cout << "Incalid action, try again" << std::endl;
		}
		
	} while (entry != "EXIT");
	return (0);
}