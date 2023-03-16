#include <stdio.h>
#include <iostream>
#include <pthread.h>

class A {
	public:
	A() {printf("A()\n");}
	~A() {printf("~A()\n");}
	virtual void function() {printf("A::function()\n");}
};

class B : public A {
	public:
	B() {printf("B()\n");}
	~B() {printf("~B()\n");}
	virtual void function() {printf("B::function()\n");}
};

int main() {

	A* p = new B;
	p->function();
	delete p;
	int i =4;
	printf("hello,world!\n");

	// return 0;
}
