/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <yoyohann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:57 by yoyohann          #+#    #+#             */
/*   Updated: 2023/01/31 23:35:14 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;

    Contact *contact = nullptr;
    contact = phonebook.GetContact();
    std::string fields[5];
    bool running = true;
    std::string choice;
    int i = 0;
    int index;

    while (running)
    {
        std::cout << "Please choose [ ADD, SEARCH , or EXIT ] : ";
        std::cin >> choice;

        if (choice.compare("ADD") == 0)
        {
            phonebook.AddContact(fields);
            phonebook.SetContact(fields, i);
            std::cout << "Contact added." << std::endl;
            i++;
            if (i == 8)
                i = 0;
        }
       	else if (choice.compare("SEARCH") == 0)
        {
            phonebook.DisplayContact(contact);
            std::cout << "Please insert the index your are searching: " << std::endl;
            std::cin >>index;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(100, '\n');
				std::cout << "Invalid choice" << std::endl;
			}
			else
				phonebook.SearchContact(contact, index);
        } 
        else if (choice.compare("EXIT") == 0)
            running = false;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }

    return (0);
}