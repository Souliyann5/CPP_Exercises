#pragma once

#include "Node.hpp"
#include <vector>

class ArrayNode : public Node {
    public:
        ArrayNode(){}

        static NodePtr make_ptr(){
            return std::make_unique<ArrayNode>();
        }

        std::string print() const override { return "[]";}

        NodeKind kind() const { return NodeKind::ARRAY; }

        int child_count(){
            return childs.size();
        }
    private:
        std::vector<NodePtr> childs;
};