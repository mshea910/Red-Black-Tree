//
// Created by Michael Shea on 1/19/23.
//

#ifndef RED_BLACK_TREE_NODE_H
#define RED_BLACK_TREE_NODE_H


class Node {
public:
    explicit Node(int data);
    int data;

    Node* left;
    Node* right;
    Node* parent;

    bool color;

};


#endif //RED_BLACK_TREE_NODE_H
