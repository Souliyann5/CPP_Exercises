#pragma once

#include "Leaf.hpp"
#include <string>


class StringLeaf : public Leaf {
    public:
        StringLeaf(std::string value)
        : _value { value }
        {}

        static NodePtr make_ptr(std::string value){
            return std::make_unique<StringLeaf>(value);
        }

        NodeKind kind() const { return NodeKind::STRING; }

        std::string print() const override { return "\"" + _value + "\""; }

        std::string data() { return _value; }
        
    private:
        std::string _value;
};