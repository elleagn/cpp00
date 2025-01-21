/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:50:35 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 13:43:36 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


// Contact::Contact(){
// }

void Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname){
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) const {
	return (this->firstName);
}

std::string Contact::getLastName(void) const {
	return (this->lastName);
}

std::string Contact::getNickname(void) const {
	return (this->nickname);
}

std::string Contact::getPhoneNumber(void) const {
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(void) const {
	return (this->darkestSecret);
}
