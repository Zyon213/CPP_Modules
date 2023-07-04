/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <yoyohann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:41:13 by yoyohann          #+#    #+#             */
/*   Updated: 2023/01/31 21:49:44 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_H
#define PhoneBook_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

class PhoneBook
{
private:
    Contact contact[8];

public:
    PhoneBook(void);
    ~PhoneBook(void);
    Contact *GetContact(void);
    void SetContact(std::string fields[5], int i);
    void DisplayContact(Contact *mycontact);
    std::string *AddContact(std::string fields[5]);
    void SearchContact(Contact *mycontact, int i);
    std::string TrimName(std::string name);
};

#endif
