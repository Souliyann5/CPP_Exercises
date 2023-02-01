#pragma once

class Plush{
    public:
    Plush(){};
    Plush(int p){
        prix = p;
    };

    int get_cost() const {
        return prix;
    }  

    void set_cost(int i){
        prix = i;
    }
    
    private:
    int prix = 10;
};
