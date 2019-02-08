#include <iostream>
#include "sl_list.hpp"

// check for loops in a singly linked list

int main() {
  // build a list w/ no loops

  SLListNode head =  SLListNode(5);
  SLListNode one = SLListNode(4);
  head.next_ = &one;
  SLListNode two = SLListNode(3);
  one.next_ = &two;
  SLListNode three = SLListNode(2);
  two.next_ = &three;
  SLListNode four = SLListNode(1);
  three.next_ = &four;

  bool x = head.checkForLoopsWithRunners();
  std::cout << "first list has loop? " << x << "\n";
  bool xx = head.checkForLoopsWithSet();
  std::cout << "first list has loop? " << xx << "\n";

  // build a list w/ a loop

  SLListNode ead =  SLListNode(5);
  SLListNode ne = SLListNode(4);
  ead.next_ = &ne;
  SLListNode wo = SLListNode(3);
  ne.next_ = &wo;
  SLListNode hree = SLListNode(2);
  wo.next_ = &hree;
  SLListNode our = SLListNode(1);
  hree.next_ = &our;
  our.next_ = &hree;

  bool y = ead.checkForLoopsWithRunners();
  std::cout << "second list has loop? " << y << "\n";
  bool yy = ead.checkForLoopsWithSet();
  std::cout << "second list has loop? " << yy << "\n";
  return 0;
}

