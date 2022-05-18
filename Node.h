#ifndef NODE_H
#define NODE_H

struct Node {
  private: 
    int data;
    struct Node * next;
  public: 
    Node(int dataInput, struct Node * nextInput);
    int getData();
    void setData(int dataInput);
    struct Node * getNext();
    void setNext(struct Node * nextInput);
};

#endif