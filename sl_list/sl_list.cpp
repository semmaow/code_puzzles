
#include <iostream>
#include <unordered_set>
#include "sl_list.hpp"

SLListNode::SLListNode(int value){
  value_ = value;
  next_ = nullptr;
}

// look for loops by saving each node to an unordered set
// and checking for repeats

bool SLListNode::checkForLoopsWithSet(SLListNode head){
  SLListNode bob = SLListNode(5);
  return true;
}


// look for loops by using 2 runners and checking if the
// fast one ever laps the slow one

bool SLListNode::checkForLoopsWithRunners(){
  std::cout << "printing list\n";
  SLListNode* runner = this;

  while (runner != nullptr){
    std::cout << "node val = " << runner->value_ << "\n";
    runner = runner->next_;
  }

  return true;
}
