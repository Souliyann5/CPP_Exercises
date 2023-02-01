#pragma once
#include <string>

class PlushStore{
    public:
    PlushStore(std::string n){
        name = n;
        amount = 0;
        size = 0;
        experience = 0;
    };

    std::string get_name() const {
        return name;
    }
    int get_wealth_amount() const {
        return amount;
    }
    int get_stock_size() const {
        return size;
    }
    int get_debt_amount() const {
        return amount + 10*amount/100;
    }
    int get_experience() const {
        return experience;
    }
    void loan(int n){
        amount += n;
    }
    int make_plush(int n){
        if(amount == 0){
            return 0;
        }
        else if(n > amount){
            size++;
            experience++;
            amount = 0;
            return n + experience;
        }
        else{
            size++;
            experience++;
            amount -= n;
            return n + experience;
        }
    }
    private:
    std::string name;
    int amount;
    int size;
    int experience;
};
