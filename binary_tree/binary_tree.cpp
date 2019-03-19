#include <iostream>    
#include "binary_tree.hpp"
#include <vector>
#include <algorithm>
    
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

void BinaryTreeNode::printTree(std::vector<int> * list)
{
  if (this != nullptr){
    if (this->left_ != nullptr){
      this->left_->printTree(list);
    }

    std::cout << this->value_ << " ";
    list->push_back(this->value_);

    if (this->right_!= nullptr){
      this->right_->printTree(list);
    }
  }
  
}

int BinaryTreeNode::isValidTree()
{
  std::vector<int> * in_order;
  this->printTree(in_order);

  for (auto i : in_order){
    std::cout << *i << " ";
  }

  std::vector<int> * test;
  for (auto i : in_order){
    test->push_back(*i);
  }

  std::sort(in_order->begin(), in_order->end());

  if (in_order == test){
    return 1;
  }
  return 0;
}

BinaryTreeNode * BinaryTreeNode::buildTree(std::vector<int> * numbers){
  
  // make a tree!

}

BinaryTreeNode * BinaryTreeNode::buildValidTree(std::vector<int> * numbers){


}
