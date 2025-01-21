/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:28:11 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 13:54:28 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

std::string inputCommand(void){
	std::string input;

	std::cout << "Enter a command: ";
	std::cin >> input;
	if (input != "EXIT" && input != "ADD" && input != "SEARCH")
	{
		std::cout << "Invalid command." << std::endl;
		input = "";
	}
	return (input);
}

void inputContact(Phonebook *phonebook){
	std::string input;
	Contact contact;

	std::cout << "Input your contact informations" << std::endl;

	std::cout << "First Name: ";
	std::cin >> input;
	contact.setFirstName(input);

	std::cout << "Last Name: ";
	std::cin >> input;
	contact.setLastName(input);

	std::cout << "Nickname: ";
	std::cin >> input;
	contact.setNickname(input);

	std::cout << "Phone Number: ";
	std::cin >> input;
	contact.setPhoneNumber(input);

	std::cout << "Darkest Secret: ";
	std::cin >> input;
	contact.setDarkestSecret(input);

	(*phonebook).addContact(contact);

}

void executeCommand(const std::string command, Phonebook *phoneBook){
	if (command == "ADD")
		inputContact(phoneBook);
}

int	main(void){
	std::string command;
	Phonebook phoneBook;
	Contact contact;

	std::cout << "Welcome to MyAwesomePhonebook !" << std::endl;
	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT." << std::endl;
		command = inputCommand();
		if (command == "EXIT")
			break;
		if (command != "")
			executeCommand(command, &phoneBook);
	}
}
