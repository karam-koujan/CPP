#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
    private :
        char    *firstname;
        char    *lastname;
        char    *nickname;
        char    *phone_number;
        char    *darkest_secret;
    public :
        Contact();
        void set_firstname(char *firstname);
        void set_lastname(char *lastname);
        void set_nickname(char *nickname);
        void set_phone_number(char *phone_number);
        void set_darkest_secret(char *darkest_secret);
        void get_firstname();
        void get_lastname();
        void get_nickname();
        void get_phone_number();
        void get_darkest_secret();
};

#endif