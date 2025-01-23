/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:05:52 by gozon             #+#    #+#             */
/*   Updated: 2025/01/23 09:02:16 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


Phonebook::Phonebook() : nbContact(0) {
}

void Phonebook::addContact() {
    std::string	answer;

    if (this->nbContact < 8)
        this->nbContact += 1;
    else {
        std::cout << "Phonebook full. This will erase your oldest contact.\n"
                  << "Proceed anyway? [y/N] ";
        std::getline(std::cin, answer);
        if (answer != "y" && answer != "Y")
            return ;
    }

    // Shift contacts by one index
    for (int i = 7; i > 0; i--)
        this->contacts[i] = this->contacts[i - 1];

    this->contacts[0].inputInfos();
}

bool    Phonebook::printContact(int index) const {
    if (index < 0 || index > this->nbContact)
    {
        std::cout << "Invalid index. Please enter a number between 0 and "
                  << index << ".\n";
        return (false);
    }

    this->contacts[index].printVertical();
    return (true);
}

void    Phonebook::printAll() const {
    if (this->nbContact == 0)
        std::cout << "Your phonebook is empty." << std::endl;

    std::cout << std::left << std::setw(10) << "Index" << " | "
              << std::left << std::setw(10) << "First Name" << " | "
              << std::left << std::setw(10) << "Last Name" << " | "
              << std::left << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < this->nbContact; i++)
        this->contacts[i].printHorizontal(i);
}
