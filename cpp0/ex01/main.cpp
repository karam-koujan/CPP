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

void Contact::create_contact()
{
	while (firstname.length() == 0)
    {
        std::cout << "first name : ";
		std::getline(std::cin, firstname);
		if (std::cin.eof())
			return ;
        if (firstname.length() == 0)
            std::cout << "empty field are not allowed" << std::endl;
    }
    while (lastname.length() == 0)
    {
        std::cout << "last name : ";
		std::getline(std::cin, lastname);
		if (std::cin.eof())
			return ;
        if (lastname.length() == 0)
            std::cout << "empty field are not allowed"  << std::endl;;
    }
    while (nickname.length() == 0)
    {
        std::cout << "nick name : ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			return ;
        if (nickname.length() == 0)
            std::cout << "empty field are not allowed" << std::endl;;
    }
    while (phone_number.length() == 0)
    {
        std::cout << "phone number : ";
		std::getline(std::cin, phone_number);
		if (std::cin.eof())
			return ;
        if (phone_number.length() == 0)
            std::cout << "empty field are not allowed"  << std::endl;;
    }
    while (darkest_secret.length() == 0)
    {
        std::cout << "darkest secret : ";
		std::getline(std::cin, darkest_secret);
		if (std::cin.eof())
			return ;
        if (darkest_secret.length() == 0)
            std::cout << "empty field are not allowed" << std::endl;;
    }
}

void    handle_add(PhoneBook& phonebook)
{
    Contact contact;
	contact.create_contact();
    phonebook.contacts[phonebook.contact_num % 8] = contact;
    phonebook.contact_num++;
    std::cout << "A Contact added to phone number successfully!!" << std::endl;
}

void	print_cols(std::string field)
{
	int i = 10;
	i-= field.length();
	if (i < 0)
		std::cout << field.substr(0, 9) + ".";
	else
		std::cout << std::string(i, ' ') << field;
}

int is_number(std::string str)
{
	int i = 0;
	while (i < str.length())
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

std::string Contact::getFirstName()
{
	return firstname;
}

std::string Contact::getLastName()
{
	return lastname;
}

std::string Contact::getNickName()
{
	return nickname;
}

std::string Contact::getPhoneNumber()
{
	return phone_number;
}

std::string Contact::getDarkestSecret()
{
	return darkest_secret;
}

void handle_search(PhoneBook& phonebook)
{
	int	i = 0;
	int	idx = 0;
	std::string idx_str = "";
	while (i < phonebook.contact_num)
	{
		print_cols(std::to_string(i + 1));
		std::cout << "|";
		print_cols(phonebook.contacts[i].getFirstName());
		std::cout << "|";
		print_cols(phonebook.contacts[i].getLastName());
		std::cout << "|";
		print_cols(phonebook.contacts[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter contact index: ";
	std::getline(std::cin, idx_str);
	if (std::cin.eof())
			return ;
	try {
    idx = std::stoi(idx_str);
	} catch (const std::invalid_argument&) {
		std::cout << "invalid number" << std::endl;
		return ;
	}
	if (!is_number(idx_str))
		std::cout << "invalid number" << std::endl;
	else if (idx <= 0 || idx > phonebook.contact_num)
		std::cout << "Index out of range" << std::endl;
	else
	{
		std::cout << "index: " << std::to_string(idx + 1) << std::endl;
		std::cout << "first name: " << phonebook.contacts[idx - 1].getFirstName() << std::endl;
		std::cout << "last name: " << phonebook.contacts[idx - 1].getLastName() << std::endl;
		std::cout << "nickname: " << phonebook.contacts[idx - 1].getNickName() << std::endl;
		std::cout << "phone number: " << phonebook.contacts[idx - 1].getPhoneNumber() << std::endl;	
		std::cout << "darkest secret: " << phonebook.contacts[idx - 1].getDarkestSecret() << std::endl;	

	}
}

int main()
{
    PhoneBook phonebook;
	while (true)
	{

		std::string cmd;
		std::cout << "Please Enter three commands: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Command : ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (1);
		if (!is_valid_cmd(cmd))
			std::cout << "wrong command!!";
		else
		{
			if (cmd == "ADD")
			{
				handle_add(phonebook);
			}
			else if (cmd == "SEARCH") 
			{
				handle_search(phonebook);
			}
			else if (cmd == "EXIT")
				exit(0);
		}
	}

}
