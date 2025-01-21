/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:05:52 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 11:26:30 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::addContact(Phonebook phonebook, Contact contact)
{
	phonebook.maxContactIndex += 1;
	for (int i = phonebook.maxContactIndex; i > 0; i--)
		phonebook.contacts[i] = phonebook.contacts[i - 1];
	phonebook.contacts[0] = contact;
}

Contact Phonebook::getContact(Phonebook phonebook, int index)
{
	return (phonebook.contacts[index]);
}
