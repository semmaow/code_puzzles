#ifndef binary_tree_hpp
#define binary_tree_hpp

#include <vector>
class BinaryTreeNode
{
public:
    int value_;
    BinaryTreeNode* left_;
    BinaryTreeNode* right_;

    BinaryTreeNode(int value);
    ~BinaryTreeNode();
    BinaryTreeNode * insertLeft(int value);
    BinaryTreeNode * insertRight(int value);
    void printTree(std::vector<int> * list);
    int validTree();
};

#endif
