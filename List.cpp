#include <iostream>

#include <string>
#include "List.h"

List::List(){
  head = new Node("dummy", nullptr);
  currSize = 0;
}

List::~List(){
  std::cout << "In the destructor\n";
  //if (head != nullptr){
  Node *t,*t2;
  
  t=head->getNext();
  while (t!=nullptr){
    t2=t;
    t=t->getNext();
    delete t2;
  }
  //} 
}

void List::insert(std::string data){
  Node *t = new Node(data,head->getNext());
  //if (head==nullptr)
  //  head=t;
  //else{
  //}
  head->setNext(t);
  currSize++;
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

  Node *newNode = new Node(data);
  Node *t = head;
  while (t->getNext() != nullptr){
    t=t->getNext();
  }
  t->setNext(newNode);
  currSize++;

}

int List::size(){ // returns the size
  return currSize;
}


std::string &List::at(int index){ // returns the element at a location
  Node *t = head;
  for (int i = 0; i < index + 1; i++) {
    t=t->getNext();
  }
  return t->getRef();
}

std::string List::insert(int index,std::string data){ // inserts string at location

  Node *t = head;
  Node *newNode;

  for (int i = 0; i < index; i++) {
    t=t->getNext();
  }

  newNode = new Node(data, t->getNext());
  t->setNext(newNode);
  currSize++;
  return t->getNext()->getData();

}

void List::remove(int input) { // removes the element at location i

  Node *t = head;
  Node *temp = t->getNext();

  int counter = 0;

  while (counter < input) {
    t = temp;
    temp = temp->getNext();
    counter++;
  }

  t->setNext(temp->getNext()); 
  delete temp;
  
  currSize--;
}

std::string &List::operator[](int input) { // overloaded square brackets
  return at(input);
}

