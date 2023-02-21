#pragma once

#include "Node.hpp"

class ObjectNode : public Node {
    public:
        ObjectNode(){}

        static NodePtr make_ptr(){
            return std::make_unique<ObjectNode>();
        }

        std::string print() const override { return "{}";}

        NodeKind kind() const { return NodeKind::OBJECT; }
};