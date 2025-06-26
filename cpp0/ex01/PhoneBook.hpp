#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    public :
        PhoneBook();
        Contact contacts[8];
        int     contact_num;
};

#endif