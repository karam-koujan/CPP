#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
        int     contact_num;
    public :
        PhoneBook();
        void add_contact();
        void handle_search();
};

#endif