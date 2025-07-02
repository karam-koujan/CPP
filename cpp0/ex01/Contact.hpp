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
    void setFirstName(const std::string& fname);
    void setLastName(const std::string& lname);
    void setNickname(const std::string& nname);
    void setPhoneNumber(const std::string& phone);
    void setDarkestSecret(const std::string& secret);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};


#endif