#include <iostream>
#include "binary_tree.hpp"

//find second largest in a binary tree

int main() {
  // build a tree

  BinaryTreeNode * root = new BinaryTreeNode(5);
  root->insertLeft(4);
  root->insertRight(7);

  std::cout << "got here\n";

  return 0;
}
