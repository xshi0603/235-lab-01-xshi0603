#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "List.h"

TEST_CASE("Testing Linked List"){

  List *l = new List();
  l->insert("one");
  l->push_back("two");
  l->push_back("three");
  l->push_back("four");

  CHECK(l->at(0)=="one");
  CHECK(l->at(1)=="two");
  CHECK(l->at(2)=="three");
  CHECK(l->at(3)=="four");
  

}
