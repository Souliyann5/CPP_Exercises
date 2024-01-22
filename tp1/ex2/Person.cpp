#include <string>

class Person
{
public:

    Person(){}
    Person(std::string first_name,std::string surname)
        : _first_name { first_name }
        , _surname { surname }
        {}

    void set_first_name(const std::string& first_name) { _first_name = first_name; }
    void set_surname(const std::string& surname) { _surname = surname; }
    std::string get_first_name() const {return _first_name;}
    std::string get_surname() const {return _surname;}


private:
    std::string  _first_name;
    std::string _surname;
};
