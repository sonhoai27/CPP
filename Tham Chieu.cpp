#include <iostream>

using namespace std;

int main(){
	int a = 2;
	int &b = a;
	b = 122;
	cout<<a;
	system("pause");
	return 0;
}
