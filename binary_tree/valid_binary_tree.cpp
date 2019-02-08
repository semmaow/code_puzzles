#include <iostream>
#include "binary_tree.hpp"

// verify a binary tree is a valid binary search tree

int main() {
  // build a tree

  BinaryTreeNode * root = new BinaryTreeNode(5);
  root->insertLeft(3);
  root->left_->insertLeft(2);
  root->left_->insertRight(4);
  root->insertRight(7);
  root->right_->insertLeft(6);
  root->right_->insertRight(8);

  std::cout << "got here\n";

  int bob = root->validTree();
  std::cout << "\n";

  if (bob == 1){
    std::cout << "is valid\n";
  }
  else{
    std::cout << "not valid\n";
  }

  return 0;
}
