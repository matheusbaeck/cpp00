/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 13:06:56 by math              #+#    #+#             */
/*   Updated: 2024/05/05 14:12:25 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yellow_pages.hpp"

PhoneBook::PhoneBook()
{
	this->n_contacts = 0;
}

void PhoneBook::add_contact()
{
	this->contacts[this->n_contacts % 8].add();
	this->n_contacts++;
}
void PhoneBook::search_contact(std::string name) const
{
	int size;

	size = this->n_contacts;
	if (size > 8)
		size = 8;
	for (int i = 0; i < size; i++)
	{
		if (this->contacts[i].get_name() == name)
		{
			this->contacts[i].print_contact(i);
			return ;
		}
	}
	std::cout << "Contact not found!" << std::endl;
}

void	PhoneBook::list_contact( void ) const
{
	int size;

	size = this->n_contacts;
	if (size > 8)
		size = 8;
	for(int i = 0; i < size; ++i)
		this->contacts[i].print_contact(i);
}