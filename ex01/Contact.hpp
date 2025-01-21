/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:32:00 by gozon             #+#    #+#             */
/*   Updated: 2025/01/19 11:02:01 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
private:

	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:

	Contact(std::string firstName, std::string lastName, std::string nickname,
		std::string phoneNumber, std::string darkestSecret);
	std::string getFirstName(Contact contact);
	std::string getLastName(Contact contact);
	std::string getNickname(Contact contact);
	std::string getPhoneNumber(Contact contact);
	std::string getDarkestSecret(Contact contact);
};

#endif
