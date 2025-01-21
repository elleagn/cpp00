/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:28:11 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 12:01:37 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

std::string inputCommand(void)
{
	std::string input;

	std::cout << "Enter a command: ";
	std::cin >> input;
	std::cout << std::endl;
	if (input != "EXIT" && input != "ADD" && input != "SEARCH")
		std::cout << "Invalid command." << std::endl;
}

void executeCommand(const std::string command, Phonebook *phoneBook)
{
}

int	main(void)
{
	std::string command;
	Phonebook phoneBook;

	while (1)
	{
		std::cout << "Welcome to MyAwesomePhonebook !" << std::endl;
		std::cout << "Available commands: ADD, SEARCH, EXIT." << std::endl;
		command = inputCommand();
		if (command == "EXIT")
			break;
		if (command != "")
			executeCommand(command, &phoneBook);
	}
}
