/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:52:40 by gozon             #+#    #+#             */
/*   Updated: 2025/01/22 18:48:41 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class	Phonebook {
    private:

        Contact contacts[8];
        int     nbContact;

    public:
                Phonebook();
        void    addContact(void);
        void    printAll() const;
        bool    printContact(int index) const;
};

#endif
