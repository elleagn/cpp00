/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:52:40 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 11:59:53 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

class Phonebook {
	private:

		Contact contacts[8];
		int		maxContactIndex = -1;

	public:
		void addContact(Phonebook phoneBook, Contact contact);
		Contact getContact(Phonebook phoneBook, int index);
};
