#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>



#include "Contact.hpp"

Contact::Contact()
{
    firstname = "";
    lastname = "";
    nickname = "";
    phone_number = "";
    darkest_secret = "";
}

PhoneBook::PhoneBook()
{
    contact_num = 0;
}

bool    is_valid_cmd(std::string cmd)
{
    if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
        return true;
    return false;
}

void    handle_add(PhoneBook phonebook)
{
    Contact contact;
    while (contact.firstname.length() == 0)
    {
        std::cout << "first name : ";
        std::cin >> contact.firstname;
        if (contact.firstname.length() == 0)
            std::cout << "empty field are not allowed" << std::endl;
    }
    while (contact.lastname.length() == 0)
    {
        std::cout << "last name : ";
        std::cin >> contact.lastname;
        if (contact.lastname.length() == 0)
            std::cout << "empty field are not allowed"  << std::endl;;
    }
    while (contact.nickname.length() == 0)
    {
        std::cout << "nick name : ";
        std::cin >> contact.nickname;
        if (contact.nickname.length() == 0)
            std::cout << "empty field are not allowed" << std::endl;;
    }
    while (contact.phone_number.length() == 0)
    {
        std::cout << "phone number : ";
        std::cin >> contact.phone_number;
        if (contact.phone_number.length() == 0)
            std::cout << "empty field are not allowed"  << std::endl;;
    }
    while (contact.darkest_secret.length() == 0)
    {
        std::cout << "darkest secret : ";
        std::cin >> contact.darkest_secret;
        if (contact.darkest_secret.length() == 0)
            std::cout << "empty field are not allowed" << std::endl;;
    }
    phonebook.contacts[phonebook.contact_num % 8] = contact;
    phonebook.contact_num++;
    std::cout << "A Contact added to phone number successfully!!" << std::endl;
}

int main()
{
    // prompt the user to enter one of three commands, ADD, SEARCH, EXIT
    //bool exit = true;
    PhoneBook phonebook;
    std::string cmd;
    std::cout << "Please Enter three commands: ADD, SEARCH, EXIT" << std::endl;
    std::cout << "Command : ";
    std::cin >> cmd;
    if (!is_valid_cmd(cmd))
        std::cout << "wrong command!!";
    else
    {
        if (cmd == "ADD")
        {
            handle_add(phonebook);
        }
    }

}
