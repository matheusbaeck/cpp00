/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yellow_pages.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:26:46 by math              #+#    #+#             */
/*   Updated: 2024/05/05 14:11:01 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef YELLOW_PAGES_H
#  define YELLOW_PAGES_H

#include <iostream>
#include <iomanip>
#include <string.h>

class Contact
{
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	std::string _trucate_str(std::string str) const;

	public:
		Contact( void );
		void add( void );
		void print_contact(int index) const;
		std::string	get_name( void ) const;
};

class PhoneBook
{
	Contact contacts[8];

	public:
		PhoneBook();
		int		n_contacts;
		void 	add_contact( void );
		void 	search_contact(std::string name) const;
		void	list_contact( void ) const;
};

#endif