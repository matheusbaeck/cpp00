/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:36:45 by math              #+#    #+#             */
/*   Updated: 2024/05/05 14:05:38 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "yellow_pages.hpp"

Contact::Contact( void )
{
	std::string std_str = "empty";

	this->_first_name = std_str;
	this->_last_name = std_str;
	this->_nickname = std_str;
	this->_darkest_secret = std_str;
}

std::string Contact::_trucate_str(std::string str) const
{
	if (str.length() < 10)
		return (str);
	return (str.substr(0, 9) + ".");
}

void Contact::add( void )
{
	std::cout << "First name:";
	std::cin >> this->_first_name;
	std::cout << "Last name:";
	std::cin >> this->_last_name;
	std::cout << "Nickname:";
	std::cin >> this->_nickname;
	std::cout << "Phone number:";
	std::cin >> this->_phone_number;
	std::cout << "Darkest secret:";
	std::cin >> this->_darkest_secret;
	std::cout << "Contact sucesfully add" << std::endl;
}
void	Contact::print_contact(int index) const
{
	std::string	sep = " | ";

	std::cout
			<< std::setw(10) << index << sep
			<< std::setw(10) << this->_trucate_str(this->_first_name) << sep
			<< std::setw(10) << this->_trucate_str(this->_last_name) << sep
			<< std::setw(10) << this->_trucate_str(this->_nickname) << std::endl;
}

std::string	Contact::get_name( void ) const
{
	return (this->_first_name);
}