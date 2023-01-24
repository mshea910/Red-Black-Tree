//
// Created by Michael Shea on 1/19/23.
//

#ifndef RED_BLACK_TREE_REDBLACKTREE_H
#define RED_BLACK_TREE_REDBLACKTREE_H

#include "BinaryTree.h"

class RedBlackTree : BinaryTree {
public:
    RedBlackTree() : BinaryTree(Node(0)) {}

    Node* insertNode(Node*, int);
    void swapColors(Node*,Node*);
    int isRed(Node*);

private:

};


#endif //RED_BLACK_TREE_REDBLACKTREE_H
