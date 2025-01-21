/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:05:52 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 13:39:00 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


Phonebook::Phonebook() : maxContactIndex(-1) {

}

void Phonebook::addContact(Contact contact)
{
	if (this->maxContactIndex < 7)
		this->maxContactIndex += 1;
	for (int i = this->maxContactIndex; i > 0; i--)
		this->contacts[i] = this->contacts[i - 1];
	this->contacts[0] = contact;
}

Contact Phonebook::getContact(int index)
{
	return (this->contacts[index]);
}
