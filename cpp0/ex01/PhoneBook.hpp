#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
class PhoneBook
{
    private :
        Contact contacts[8];
    public :
        PhoneBook();
        void    add();
        void    search();
        int     contact_num;
};

#endif