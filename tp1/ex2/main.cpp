#include "Person.cpp"
#include <iostream>

int main()
{
    Person p;
    p.set_first_name("Palluche");
    p.set_surname("La Faluche");
    std::cout << "La personne s'appelle " << p.get_first_name() << " " << p.get_surname() << std::endl;

    return 0;
}
