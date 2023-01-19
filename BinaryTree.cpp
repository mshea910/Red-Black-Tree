//
// Created by Michael Shea on 1/19/23.
//

#include "BinaryTree.h"

Node BinaryTree::getRoot() {
    return this->root;
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
