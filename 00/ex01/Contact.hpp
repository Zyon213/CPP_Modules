/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <yoyohann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:48 by yoyohann          #+#    #+#             */
/*   Updated: 2023/01/31 19:40:48 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_H
#define Contact_H

#include <iostream>
#include <string>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkSecret;

public:
    Contact(void);
    ~Contact(void);

    void SetFirstName(std::string fname);
    std::string GetFirstName(void);

    void SetLastName(std::string fname);
    std::string GetLastName(void);

    void SetNickName(std::string nname);
    std::string GetNickName(void);

    void SetPhoneNumber(std::string pnumber);
    std::string GetPhoneNumber(void);

    void SetDarkSecret(std::string dsecret);
    std::string GetDarkSecret(void);
};

#endif