/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:28:11 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 14:05:09 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "awesome_phonebook.hpp"

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
