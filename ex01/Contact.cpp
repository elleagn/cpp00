/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:50:35 by gozon             #+#    #+#             */
/*   Updated: 2025/01/22 19:05:29 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string	inputField(std::string field) {
	std::string	input;

	while (true) {
		std::cout << field << ": ";
		std::cin >> input;
		if (input != "")
			break;
		std::cout << "Empty fields are not accepted." << std::endl;
	}
	return (input);
}

void	Contact::inputInfos() {
	std::string	input;
	Contact		contact;

	std::cout << "Input your contact informations." << std::endl;
	this->firstName = inputField("First Name");
	this->lastName = inputField("Last Name");
	this->nickname = inputField("Nickname");
	this->phoneNumber = inputField("Phone Number");
	this->darkestSecret = inputField("Darkest Secret");
}

static std::string	formatString(std::string str) {
	if (str.length() > 10) {
		str.resize(9);
		str += ".";
	}
	return (str);
}

void	Contact::printHorizontal(int index) const {
	std::cout << std::setw(10) << index << " | ";
	std::cout << std::setw(10) << formatString(this->firstName) << " | ";
	std::cout << std::setw(10) << formatString(this->lastName) << " | ";
	std::cout << std::setw(10) << formatString(this->nickname) << std::endl;
}

void	Contact::printVertical() const {
	std::cout << "First Name:     " << this->firstName << std::endl;
	std::cout << "Last Name:      " << this->lastName << std::endl;
	std::cout << "Nickname:       " << this->nickname << std::endl;
	std::cout << "Phone Number:   " << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}
