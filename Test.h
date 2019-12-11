#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

class Test
{
private:


public:

  Test();

  void isEmptyTest1();

  void enqueueTest1();
  void enqueueTest2();
  void enqueueTest3();

  void dequeueTest1();
  void dequeueTest2();
  bool dequeueTest3();

  void peekTest1();
  void peekTest2();
  bool peekTest3();

  void destructorTest1();


  ~Test();

};
#endif
