#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	cout<<"\nString to Number: \n";
	string a = "45";
	cout<<atoi(a.c_str()) + 1;
	system("pause");
	return 0;
}
