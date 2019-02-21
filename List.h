#include <iostream>

#include <string>
#include "Node.h"

using std::cout;
using std::endl;

class List{
private:
  Node *head;
  int currSize;
public:
  List();
  ~List();
  void insert(std::string data);
  std::string getDebugString();
  void push_back(std::string); // inserts at the end of the vector
  int size(); // returns the size
  std::string &at(int); // returns the element at a location
  std::string insert(int,std::string); // inserts string at location
  void remove(int i); // removes the element at location i
  std::string &operator[](int); // overloaded square brackets
};


