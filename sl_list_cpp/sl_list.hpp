#ifndef sllist_hpp
#define sllist_hpp

class SLListNode {
  public:
    int value_;
    SLListNode* next_;
    SLListNode(int value);

    bool checkForLoopsWithSet();
    bool checkForLoopsWithRunners();
};

#endif
