//
// Created by Michael Shea on 1/19/23.
//

#include "RedBlackTree.h"

Node* RedBlackTree::insertNode(Node* node, int data) {

    if(node == NULL){
        return createNode(data, false);
    }

    if(data < node->data){
        node->left = insertNode(node->left, data);
    } else if(data > node->data){
        node->right = insertNode(node->right, data);
    } else {
        return node;
    }

    if(isRed(node->right) && !isRed(node->left)){
        node = leftRotate(node);
        swapColors(node, node->left);
    }

    if(isRed(node->left) && isRed(node->left->left)){
        node = rightRotate(node);
        swapColors(node, node -> right);
    }

    if(isRed(node->left) && isRed(node->right)){
        node->color = !node->color;
        node->left->color = false;
        node->right->color = false;
    }

    return node;
}

void RedBlackTree::swapColors(Node* one, Node* two) {
    bool col = one->color;
    one->color = two->color;
    two->color = col;
}

int RedBlackTree::isRed(Node* node){
    if (node == NULL){
        return 0;
    } else{
        return true;
    }
}