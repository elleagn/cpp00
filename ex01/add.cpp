/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:05:16 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 14:17:22 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

std::string inputField(std::string field)
{
	std::string input;

	while (1) {
		std::cout << field << ": ";
		std::cin >> input;
		if (input != "")
			break;
		std::cout << "Empty fields are not accepted." << std::endl;
	}
	return (input);
}

void inputContact(Phonebook *phonebook){
	std::string input;
	Contact contact;

	std::cout << "Input your contact informations" << std::endl;

	input = inputField("First Name");
	contact.setFirstName(input);

	input = inputField("Last Name");
	contact.setLastName(input);

	input = inputField("Nickname");
	contact.setNickname(input);

	input = inputField("Phone Number");
	contact.setPhoneNumber(input);

	input = inputField("Darkest Secret");
	contact.setDarkestSecret(input);

	(*phonebook).addContact(contact);

}
