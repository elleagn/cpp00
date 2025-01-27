/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:50:35 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 08:05:26 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string  inputField(std::string field) {

    std::string input = "";

    while (input == "") {
        std::cout << field << ": ";
        std::getline(std::cin, input);
        if (input == "")
            std::cout << "Empty fields are not accepted." << std::endl;
    }
    return (input);

}

void    Contact::inputInfos() {

    std::string input;
    Contact     contact;

    std::cout << "\nInput your contact informations." << std::endl;
    this->firstName = inputField("First Name");
    this->lastName = inputField("Last Name");
    this->nickname = inputField("Nickname");
    this->phoneNumber = inputField("Phone Number");
    this->darkestSecret = inputField("Darkest Secret");
    std::cout << std::endl;

}

static std::string  formatString(std::string str) {

    if (str.length() > 10) {
        str.resize(9);
        str += ".";
    }
    return (str);

}

void	Contact::printHorizontal(int index) const {

    std::cout << std::setw(10) << index << " | "
              << std::setw(10) << formatString(this->firstName) << " | "
              << std::setw(10) << formatString(this->lastName) << " | "
              << std::setw(10) << formatString(this->nickname) << std::endl;

}

void	Contact::printVertical() const {

    std::cout << "First Name:     " << this->firstName << std::endl
              << "Last Name:      " << this->lastName << std::endl
              << "Nickname:       " << this->nickname << std::endl
              << "Phone Number:   " << this->phoneNumber << std::endl
              << "Darkest Secret: " << this->darkestSecret << std::endl;

}
