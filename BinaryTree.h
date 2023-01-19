//
// Created by Michael Shea on 1/19/23.
//

#ifndef RED_BLACK_TREE_BINARYTREE_H
#define RED_BLACK_TREE_BINARYTREE_H

#include "Node.h"
#include <string>
#include <iostream>

class BinaryTree {
public:
    Node getRoot();
    std::string toString();

protected:
    Node root;
};


#endif //RED_BLACK_TREE_BINARYTREE_H
