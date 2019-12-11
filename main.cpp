/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>

#include "Queue.h"
#include "Test.h"

using namespace std;

int main()
{





	Test T;
	T.isEmptyTest1();
	T.enqueueTest1();
	T.enqueueTest2();
	T.enqueueTest3();
	T.dequeueTest1();
	T.dequeueTest2();

	if(T.dequeueTest3())
	{
		cout << "PASSED" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}

	T.peekTest1();
	T.peekTest2();

	if(T.peekTest3())
	{
		cout << "PASSED" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}

	T.destructorTest1();

	return(0);
}
