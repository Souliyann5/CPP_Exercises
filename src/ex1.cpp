#include "ex1.hpp"
#include "../lib/concatenate.hpp"

void pairwise_concatenate(std::list<std::list<int>>& list1, const std::list<std::list<int>>& list2){
    auto it1 = list1.begin();
    auto it2 = list2.begin();

    while(it1 != list1.end() && it2 != list2.end()){
        concatenate(*it1,*it2);
        it1++;
        it2++;
    }
}

void pairwise_concatenate(std::list<std::list<int>>& list1, std::list<std::list<int>>&& list2){
    auto it1 = list1.begin();
    auto it2 = list2.begin();

    while(it1 != list1.end() && it2 != list2.end()){
        concatenate(*it1,std::move(*it2));
        it1++;
        it2++;
    }
}