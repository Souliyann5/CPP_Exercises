#pragma once
#include <string>

class Kid{
    public:
    Kid(std::string n, int m){
        name = n;
        money = m;
    };
    std::string get_name() const {
        return "Dany";
    }
    int get_money() const {
        return 12;
    }
    private:
    std::string name;
    int money;
};