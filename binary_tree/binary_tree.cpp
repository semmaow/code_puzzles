

#include <iostream>    
#include "binary_tree.hpp"
    
BinaryTreeNode::BinaryTreeNode(int value)
{
    value_ = value;
    left_ = nullptr;
    right_ = nullptr;
}

BinaryTreeNode::~BinaryTreeNode()
{
    delete left_;
    delete right_;
}

BinaryTreeNode * BinaryTreeNode::insertLeft(int value)
{
    this->left_ = new BinaryTreeNode(value);
    return this->left_;
}

BinaryTreeNode * BinaryTreeNode::insertRight(int value)
{
    this->right_ = new BinaryTreeNode(value);
    return this->right_;
}

void BinaryTreeNode::printTree()
{

  //todo
}
