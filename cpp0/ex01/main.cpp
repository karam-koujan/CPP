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

int main()
{
    // prompt the user to enter one of three commands, ADD, SEARCH, EXIT
    //bool exit = true;
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
            handle_add();
        }
    }

}
