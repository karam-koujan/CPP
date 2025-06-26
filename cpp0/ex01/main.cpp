#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>



bool    is_valid_cmd(std::string cmd)
{
    if (cmd == "ADD" || cmd == "SEARCH" || CMD == "EXIT")
        return true;
    return false;
}

void    handle_add(PhoneBook phonebook, int contact_num)
{
    Contact contact;
    std::cout << "first name : " << std::endl;
    std::cin >> contact.firstname;
    std::cout << "last name : " << std::endl;
    std::cin >> contact.lastname;
    std::cout << "nickname : " << std::endl;
    std::cin >> contact.nickname;
    std::cout << "phone number : " << std::endl;
    std::cin >> contact.phone_number;
    std::cout << "darkest secret : " << std::endl;
    std::cin >> contact.darkest_secret;
}

int main()
{
    // prompt the user to enter one of three commands, ADD, SEARCH, EXIT
    //bool exit = true;
    PhoneBook phonebook;
    phonebook.contact_num = 0;
    std::string cmd;
    std::cout << "Please Enter three commands: ADD, SEARCH, EXIT" << std::endl;
    std::cout << "Command : ";
    std::cin >> cmd;
    std::cout << cmd << std::endl;
    if (!is_valid_cmd(cmd))
        std::cout << "wrong command!!";
    else
    {
        if (cmd == "ADD")
        {
            handle_add(phonebook, contact_num);
        }
    }

}
