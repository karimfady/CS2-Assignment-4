#ifndef linkedlist_hpp
#define linkedlist_hpp
#include <iostream>
class linkedlist{
private:
    struct Node{
        int value;
        int occurance;
        Node *next;
    };
    Node *head;
    int numOfNodes=0;
public:
    linkedlist();
    void Print();
    void Insert(int);
    int getSum();
    void Remove(int);
    int getNumOfNodes();
 
};
#endif
