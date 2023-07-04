/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <yoyohann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:41:06 by yoyohann          #+#    #+#             */
/*   Updated: 2023/01/31 23:04:46 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    //   std::cout << "Constractor called." << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    //    std::cout << "Deconstructor called." << std::endl;
}

Contact *PhoneBook::GetContact(void)
{
    return contact;
}
void PhoneBook::SetContact(std::string fields[5], int i)
{
    contact[i].SetFirstName(fields[0]);
    contact[i].SetLastName(fields[1]);
    contact[i].SetNickName(fields[2]);
    contact[i].SetPhoneNumber(fields[3]);
    contact[i].SetDarkSecret(fields[4]);
}
void PhoneBook::DisplayContact(Contact *mycontact)
{
    PhoneBook phonebook;
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << std::setw(10) << std::right << "Index"
              << "|";
    std::cout << std::setw(10) << std::right << "Firstname"
              << "|";
    std::cout << std::setw(10) << std::right << "Lastname"
              << "|";
    std::cout << std::setw(10) << std::right << "Nickname"
              << "|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << std::right << i + 1 << "|";
        std::cout << std::setw(10) << std::right << phonebook.TrimName(mycontact[i].GetFirstName()) << "|";
        std::cout << std::setw(10) << std::right << phonebook.TrimName(mycontact[i].GetLastName()) << "|";
        std::cout << std::setw(10) << std::right << phonebook.TrimName(mycontact[i].GetDarkSecret()) << "|" << std::endl;
    }
    std::cout << "--------------------------------------------" << std::endl;
}

std::string *PhoneBook::AddContact(std::string fields[5])
{
    std::cout << "Insert first name:" << std::endl;
    std::cin >> fields[0];
    std::cout << "Insert last name:" << std::endl;
    std::cin >> fields[1];
    std::cout << "Insert nick name:" << std::endl;
    std::cin >> fields[2];
    std::cout << "Insert phone number:" << std::endl;
    std::cin >> fields[3];
    std::cout << "Insert dark secret:" << std::endl;
    std::cin >> fields[4];

    return (fields);
}
std::string PhoneBook::TrimName(std::string name)
{
    std::string str;
    if (name.length() > 10)
    {
        str = name.substr(0, 9);
        str.append(".");
    }
    else
        str = name;
    return str;
}
void PhoneBook::SearchContact(Contact *mycontact, int i)
{
    if (mycontact[0].GetFirstName().empty())
        std::cout << "Contact is Empty." << std::endl;
    else if (i > 8 || i < 1)
        std::cout << "Out of range index." << std::endl;
    else
    {
        i--;
        for (int j = 0; j < 8; j++)
        {
            if (i == j &&  !mycontact[i].GetFirstName().empty())
            {
                std::cout << "First name: " << mycontact[i].GetFirstName() << std::endl;
                std::cout << "Last name: " << mycontact[i].GetLastName() << std::endl;
                std::cout << "Nick name: " << mycontact[i].GetNickName() << std::endl;
                std::cout << "Phone number: " << mycontact[i].GetPhoneNumber() << std::endl;
                std::cout << "Dark secret: " << mycontact[i].GetDarkSecret() << std::endl;
            }
			if (i == j && mycontact[i].GetFirstName().empty())
				std::cout << "Contact is Empty." << std::endl;
        }
    }
}