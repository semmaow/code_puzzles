#include <iostream>
#include "sl_list.hpp"

// to work on problem here:
// https://www.interviewcake.com/question/cpp/linked-list-cycles

// check for loops in a singly linked list

int main() {
  // build a list

  SLListNode head =  SLListNode(5);
  SLListNode one = SLListNode(4);
  head.next_ = &one;
  SLListNode two = SLListNode(3);
  one.next_ = &two;

  head.checkForLoopsWithRunners();
  std::cout << "got here\n";

  return 0;
}

