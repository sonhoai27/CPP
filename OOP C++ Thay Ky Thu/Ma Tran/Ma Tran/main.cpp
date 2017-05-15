#include <iostream>
#include "Matrix.h"
#include <windows.h>
using namespace std;

int main(){
	Matrix m(2, 3);
	m.getMatrix();
	m.putMatrix();
	cout<<endl<<endl;
	system("pause");
	return 0;
}