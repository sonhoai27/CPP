#include <iostream>

using namespace std;

int main()
{
	int a = 6;
	int *b;
	b = &a;
	cout << "\ndia chi cua &a: " << &a;
	cout << "\nGia tri cua a: " << a;
	cout << "\nDia chi cua b: " << *b;
	cout << "\nGia tri cua *b: " << *b;
	cout << "\nMien Gia Tri cua &b: " << &b;
	cout<<endl;
	system("pause");
	return 0;
}