#include <iostream>
#include "List.h"

int main()
{
  /*
  List *l = new List();
  std::cout << l->getDebugString();
  l->insert("one");
  l->insert("two");
  l->insert("three");
  l->insert("four");
  std::cout << l->getDebugString();
  //std::cout << l->size();
  std::cout << l->at(0);
  std::cout << l->at(1);
  std::cout << l->at(2);
  delete l;


  List l2;
  l2.insert("a");
  l2.insert("b");
  l2.insert("c");
  l2.insert("d");
  std::cout << l2.getDebugString();
  */

  List *l = new List();
  std::cout << l->getDebugString();
  
  l->push_back("one");
  l->push_back("one");
  l->push_back("one");
  l->push_back("one");

  std::cout << l->getDebugString();
  
  return 0;
}
