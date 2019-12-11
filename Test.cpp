#include "Test.h"


Test::Test()
{

}


void Test::isEmptyTest1()
{
  cout << "Test 1: Newly created Queue is empty: ";

  Queue Q;
  if(Q.isEmpty())
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE ! " << endl;
  }
}


void Test::enqueueTest1()
{
  cout << "Test 2: Enqueing a value makes the Queue not empty: ";
  Queue Q;
  Q.enqueue(1);
  if(!Q.isEmpty())
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE ! " << endl;
  }
}


void Test::enqueueTest2()
{
  cout << "Test 3: Enqueue the node in correctly order: ";
  Queue Q;
  Q.enqueue(1);
  Q.enqueue(2);
  Q.enqueue(3);

  if(Q.peekFront() == 1)   //Asuming peekFront() is correct !
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE" << endl;
  }
}


void Test::enqueueTest3()
{
  cout << "Test 4: Enqueue 5 on empty queue then peekFront() returns 5: ";
  Queue Q;
  Q.enqueue(5);

  if(Q.peekFront() != 5)   //Asuming peekFront() is correct !
  {
    cout << "FALSE" << endl;
  }
  else
  {
    cout << "PASSED" << endl;
  }
}


void Test::dequeueTest1()
{
  cout << "Test 5: dequeuing makes an one-node queue empty: ";
  Queue Q;
  Q.enqueue(1);
  Q.dequeue();
  if(Q.isEmpty())   //Asuming isEmpty() is correct !
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE" << endl;
  }
}


void Test::dequeueTest2()
{
  cout << "Test 6: dequeuing the node in correctly order: ";
  Queue Q;
  Q.enqueue(1);
  Q.enqueue(2);
  Q.dequeue();
  if(Q.peekFront() == 2)  //Asuming peekFront() is correct !
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE" << endl;
  }
}


bool Test::dequeueTest3()
{
  cout << "Test 7: dequeue() throws exception on empty Queue: ";
  Queue Q;

  try
  {
    Q.dequeue();
  }
  catch(...)  //it handles every type of the exception
  {
    return true;
  }
  return false;
}


void Test::peekTest1()
{
  cout << "Test 8: enqueue(1) and return 1 after peekFront() called: ";
  Queue Q;
  Q.enqueue(1);

  if(Q.peekFront() == 1)
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE" << endl;
  }
}


void Test::peekTest2()
{
  cout << "Test 9: peekFront() returns the first node in Queue: ";
  Queue Q;
  Q.enqueue(1);
  Q.enqueue(2);
  Q.enqueue(3);

  if(Q.peekFront() == 1)
  {
    cout << "PASSED" << endl;
  }
  else
  {
    cout << "FALSE" << endl;
  }
}

bool Test::peekTest3()
{
  cout << "Test 10: peekFront() throws exception when Queue is empty: ";
  Queue Q;

  try
  {
    Q.peekFront();
  }
  catch(...)  //it handles every type of the exception
  {
    return true;
  }
  return false;
}

void Test::destructorTest1()
{
  //manually test on valgrind for memory leak
  cout << "Test 11: No memory leaks: ";
  cout << "FALSE" << endl;
}



Test::~Test()
{

}
