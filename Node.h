#ifndef NODE_H
#define NODE_H

class Node {
  private: 
    int data;
    Node * next;
  public: 
    Node(int dataInput, Node * nextInput);
    int getData();
    void setData(int dataInput);
    Node * getNext();
    void setNext(Node * nextInput);
};

#endif