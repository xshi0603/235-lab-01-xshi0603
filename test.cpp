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
  
  l->insert(0, "1");
  l->insert(0, "2");
  l->insert(2, "3");

  CHECK((*l)[0] == "2");
  CHECK((*l)[1] == "1");
  CHECK((*l)[2] == "3");

  l->remove(2);

  CHECK((*l)[2] == "one");
  CHECK((*l)[3] == "two");



}
