#include "Node.h"

Node::Node(int dataInput, Node * nextInput) {
  this->data = dataInput;
  this->next = nextInput;
};

int Node::getData() {
  return this->data;
}; 

void Node::setData(int dataInput) {
  this->data = dataInput;
};

Node * Node::getNext() {
  return this->next;
};

void Node::setNext(Node * nextInput) {
  this->next = nextInput; 
};