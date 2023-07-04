/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <yoyohann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:36 by yoyohann          #+#    #+#             */
/*   Updated: 2023/01/31 19:40:36 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    //   std::cout << "Constractor called." << std::endl;
}

Contact::~Contact(void)
{
    //    std::cout << "Deconstructor called." << std::endl;
}

void Contact::SetFirstName(std::string fname)
{
    FirstName = fname;
}

std::string Contact::GetFirstName(void)
{
    return FirstName;
}

void Contact::SetLastName(std::string lname)
{
    LastName = lname;
}

std::string Contact::GetLastName(void)
{
    return LastName;
}

void Contact::SetPhoneNumber(std::string pnumber)
{
    PhoneNumber = pnumber;
}

std::string Contact::GetPhoneNumber(void)
{
    return PhoneNumber;
}

void Contact::SetNickName(std::string nname)
{
    NickName = nname;
}

std::string Contact::GetNickName(void)
{
    return NickName;
}

void Contact::SetDarkSecret(std::string dsecret)
{
    DarkSecret = dsecret;
}

std::string Contact::GetDarkSecret(void)
{
    return DarkSecret;
}
