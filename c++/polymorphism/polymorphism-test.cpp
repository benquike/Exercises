#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base();

	virtual void speak();
};

void Base::speak() {
	cout << "base speak" << endl;
}

Base::~Base(){

}

class Inherite:public Base
{
public:
	virtual ~Inherite();
	virtual void speak();
};

void Inherite::speak()
{
	cout << "inherite speak" << endl;
}

Inherite::~Inherite() {

}

void func(Base base) {
	base.speak();
}

int main(int argc, char *argv[])
{
	Base base;
	Inherite inherite;

	func(base);
	func(inherite);

	return 0;
}

