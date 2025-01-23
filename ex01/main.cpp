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

#include "PhoneBook.hpp"
#include <iostream>

std::string inputCommand(void) {
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

void searchPhoneBook(Phonebook phoneBook) {
    std::string index = "";

    phoneBook.printAll();

    while (index == "") {
        std::cout << "Enter your index: ";
        std::cin >> index;

        if (index.length() == 0)
            break;
        if (index.length() != 1 || (index[0] < '0' && index[0] > '9'))
        {
            std::cout << "Invalid format." << std::endl;
            index = "";
        }

        if (!phoneBook.printContact(index[0] - '0'))
            index = "";
    }
}

int	main(void){
    std::string command;
    Phonebook   phoneBook;
    Contact     contact;

    std::cout << "Welcome to MyAwesomePhonebook !" << std::endl;
    while (1)
    {
        std::cout << "Available commands: ADD, SEARCH, EXIT." << std::endl;
        command = inputCommand();
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            searchPhoneBook(phoneBook);
    }
}
