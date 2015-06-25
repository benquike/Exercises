#include <iostream>

using namespace std;

class A {};

class B {
public:
	B(A& a) {}
	// this operator is used when assigning an object of A
	// to an object of B
	B& operator=(const A& a) {return *this;}

	// type castor when assign an object of B to an object of A
	operator A() {return A();}
};


class C {
public:
	explicit C(A& a) {}
	// this operator is used when assigning an object of A
	// to an object of C
	C& operator=(const A& a) {return *this;}

	// type castor when assign an object of C to an object of A
	operator A() {return A();}
};

int main(int argc, char *argv[])
{
	A a;
	B b;
	// line 11 is used
	b = a;

	// line 14 is used
	a = b;

	// line 8 used
	B b2(a);

	C c(a);
	C c2=a;

	/*
	 * C c(c1);
	 * C c2(a);
	 * C c3 = c1;
	 * C c4 = a;
	 **/
	return 0;
}

