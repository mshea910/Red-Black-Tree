//
// Created by Michael Shea on 1/19/23.
//

#include "BinaryTree.h"

Node BinaryTree::getRoot() {
    return this->root;
}

Node* BinaryTree::createNode(int data, bool color = true) {
    Node* node = new Node(data);
    node->left = NULL;
    node->right = NULL;
    if(!color){
        node->color = false;
    } else {
        node->color = true;
    }

    return node;
}

Node* BinaryTree::rightRotate(Node * node) {
    Node* left = node->left;
    Node* right = node->right;

    left->right = node;
    node->left = right;

    return left;
}

Node* BinaryTree::leftRotate(Node * node) {
    Node* left = node->left;
    Node* right = node->right;

    right->left = node;
    node->right = left;

    return right;
}

std::string BinaryTree::toString() {
    std::string returnString;
    Node rtNode = getRoot();

    returnString.append("\nRoot: ") ;
    returnString.append(std::to_string(rtNode.data));

    if(rtNode.left != NULL){
        returnString.append("\n\tLeft: ");
        returnString.append(std::to_string(rtNode.left->data));
    }

    if(rtNode.right != NULL){
        returnString.append("\n\tRight: ");
        returnString.append(std::to_string(rtNode.right->data));
    }
}
