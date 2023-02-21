#pragma once

#include "Leaf.hpp"


class IntLeaf : public Leaf {
    public:
        IntLeaf(int value)
        : _value { value }
        {}

        static NodePtr make_ptr(int value){
            return std::make_unique<IntLeaf>(value);
        }

        NodeKind kind() const { return NodeKind::INT; }

        std::string print() const override { return std::to_string(_value); }

        int data() { return _value; }
        
    private:
        int _value;
};