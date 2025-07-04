#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

#include <string>

class Contact
{
private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    void create_contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
};


#endif