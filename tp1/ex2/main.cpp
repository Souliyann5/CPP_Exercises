#include "Person.cpp"
#include <iostream>
#include <vector>


int main()
{
    int nb_person;
    std::string first_name;
    std::string surname;

    std::cout << "Nombre de personnes : " << std::endl;
    std::cin >> nb_person;
    std::vector<Person> vec(nb_person);

    // for (auto& p: vec)
    // {
    //     std::cout << "Prenom" << std::endl;
    //     std::cin >> first_name;
    //     p.set_first_name(first_name);

    //     std::cout << "Nom" << std::endl;
    //     std::cin >> surname;
    //     p.set_surname(surname);
    // }

    for (auto& p: vec)
    {
        std::cout << "Prenom + Nom" << std::endl;
        std::cin >> first_name >> surname;

        // Person person(first_name,surname);
        // vec.push_back(person);

        vec.emplace_back(first_name, surname);
    }

    std::cout << "Les personnes sont : " << std::endl;

    for (auto p: vec)
    {
        std::cout << p.get_first_name() << " " << p.get_surname() << std::endl;
    }

    return 0;
}
