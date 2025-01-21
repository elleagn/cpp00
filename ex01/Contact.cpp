/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:50:35 by gozon             #+#    #+#             */
/*   Updated: 2025/01/19 11:33:59 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName,
	std::string nickname, std::string phoneNumber, std::string darkestSecret) :
	firstName(firstName), lastName(lastName), nickname(nickname),
	phoneNumber(phoneNumber), darkestSecret(darkestSecret){
}

std::string Contact::getFirstName(Contact contact) {
	return contact.firstName;
}

std::string Contact::getLastName(Contact contact) {
	return contact.lastName;
}

std::string Contact::getNickname(Contact contact) {
	return contact.nickname;
}

std::string Contact::getPhoneNumber(Contact contact) {
	return contact.phoneNumber;
}

std::string Contact::getDarkestSecret(Contact contact) {
	return contact.darkestSecret;
}
