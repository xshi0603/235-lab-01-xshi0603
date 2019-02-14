#include <iostream>

#include <string>
#include "List.h"

List::List(){
  head = nullptr;
}

List::~List(){
  std::cout << "In the destructor\n";
  if (head != nullptr){
    Node *t,*t2;
    
    t=head->getNext();
    while (t!=nullptr){
      t2=t;
      t=t->getNext();
      delete t2;
    }
  }
  
  
}

void List::insert(std::string data){
  Node *t = new Node(data,nullptr);
  if (head==nullptr)
    head=t;
  else{
    t->setNext(head);
    head = t;
  }
}

std::string List::getDebugString(){
  std::string s = "";
  Node *t = head;
  while (t != nullptr){
    s = s + t->getData()+"->";
    t=t->getNext();
  }
  s=s+" NULL\n";
  return s;
}

void List::push_back(std::string data){ // inserts at the end of the vector
  if (head != nullptr) {
    Node *newNode = new Node(data);
    Node *t = head;
    while (t->getNext() != nullptr){
      t=t->getNext();
    }
    t->setNext(newNode); //segfaults
  }
}

int List::size(){ // returns the size
  int sizeCounter = 0;
  Node *t = head;
  while (t != nullptr){
    sizeCounter++;
    t=t->getNext();
  }
  return sizeCounter;
}


std::string &List::at(int index){ // returns the element at a location
  Node *t = head;
  for (int i = 0; i < index; i++) {
    t=t->getNext();
  }
  return t->getData();
}

/*
std::string List::insert(int,std::string); // inserts string at location
void List::remove(int i); // removes the element at location i
std::string &List::operator[](int); // overloaded square brackets
*/
