/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:52:40 by gozon             #+#    #+#             */
/*   Updated: 2025/01/21 13:37:31 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

class Phonebook {
	private:

		Contact contacts[8];
		int		maxContactIndex;

	public:
		Phonebook();
		void addContact(Contact contact);
		Contact getContact(int index);
};
