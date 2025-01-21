/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:05:52 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 12:01:19 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::addContact(Phonebook phoneBook, Contact contact)
{
	if (phoneBook.maxContactIndex < 7)
		phoneBook.maxContactIndex += 1;
	for (int i = phoneBook.maxContactIndex; i > 0; i--)
		phoneBook.contacts[i] = phoneBook.contacts[i - 1];
	phoneBook.contacts[0] = contact;
}

Contact Phonebook::getContact(Phonebook phoneBook, int index)
{
	return (phoneBook.contacts[index]);
}
