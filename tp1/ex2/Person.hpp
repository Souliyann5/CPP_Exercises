#include <iostream>

class Person
{
public:
    Person();
    Person(std::string first_name,std::string surname);
    void set_first_name(const std::string& first_name);
    void set_surname(const std::string& surname);
    std::string get_first_name() const;
    std::string get_surname() const;

private:
    std::string  _first_name;
    std::string _surname;
};