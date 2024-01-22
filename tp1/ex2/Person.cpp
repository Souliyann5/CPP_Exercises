#include <string>
#include "Person.hpp"

    Person::Person(){}
    Person::Person(std::string first_name,std::string surname)
        : _first_name { first_name }
        , _surname { surname }
        {}

    void Person::set_first_name(const std::string& first_name) { _first_name = first_name; }
    void Person::set_surname(const std::string& surname) { _surname = surname; }
    std::string Person::get_first_name() const {return _first_name;}
    std::string Person::get_surname() const {return _surname;}
