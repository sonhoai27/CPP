#include <iostream>
using namespace std;

class A {
public:
	virtual void Xuat() {
		cout << "Day la lop A";
	}
};

class B : public A
{
public:
	void Xuat() {
		cout << "Day la lop B";
	}
};

class C : public A
{
public:
	void Xuat() {
		cout << "Day la lop C";
	}
};

int main() {

	A *x = new B;
	x->Xuat();

	delete x;
	cout << endl;

	system("pause");
	return 0;
}