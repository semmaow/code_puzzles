
#include <iostream>
#include <unordered_set>
#include "sl_list.hpp"

SLListNode::SLListNode(int value){
  value_ = value;
  next_ = nullptr;
}

// look for loops by saving each node to an unordered set
// and checking for repeats

bool SLListNode::checkForLoopsWithSet(){
  std::unordered_set<SLListNode*> node_set;
  node_set.insert(this);
  SLListNode* stepper = this;
  int safety = 0;
  while (stepper->next_ != nullptr){

    if (node_set.find(stepper->next_) != node_set.end()) {
      return true;
    }
    else {
      node_set.insert(stepper->next_);
    }
    std::cout << "step val = " << stepper->value_ << "\n";
    stepper = stepper->next_;
    ++safety;
    if (safety > 50){
      std::cout << "safety hit\n";
      return true;
    }
    
  }



  return false;
}


// look for loops by using 2 runners and checking if the
// fast one ever laps the slow one

bool SLListNode::checkForLoopsWithRunners(){
  std::cout << "printing list\n";
  SLListNode* slow_runner = this;
  SLListNode* fast_runner = this;

  int safety = 0;

  while (fast_runner != nullptr){
    std::cout << "fast val = " << fast_runner->value_ << "\n";
    std::cout << "slow val = " << slow_runner->value_ << "\n";
    if (fast_runner->next_ == nullptr){
      return false;
    }
    else{
      fast_runner = fast_runner->next_->next_;
    }
    slow_runner = slow_runner->next_;

    if (fast_runner == slow_runner) {
      return true;
    }

    ++safety;
    if (safety > 50){
      return true;
    }
  }

  return false;
}
