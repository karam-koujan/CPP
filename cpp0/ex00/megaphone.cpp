#include <iostream>


int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    char c;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < ac)
    {
        while (av[i][j])
        {
            c = std::toupper(av[i][j]);
            std::cout << c;
            j++;
        }
        i++;
        j = 0;
    }
    std::cout << std::endl;
}