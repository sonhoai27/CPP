#include <iostream>
#include "mylib.h"
#include <unistd.h>
#include <math.h>
using namespace std;
#include <cstdlib>
#include <ctime>

void kytu(int n){
	switch(n){
		case 1 :cout<<"A"; break;
		case 2 : cout<<"B"; break;
		case 3 : cout<<"C"; break;
		case 4 : cout<<"D"; break;
		case 5 : cout<<"F"; break;
		case 6 : cout<<"G"; break;
		case 7 : cout<<"H"; break;
		case 8 : cout<<"I"; break;
		case 9 : cout<<"J"; break;
		case 10 : cout<<"K"; break;
	}
}
 
int main()
{
	srand(time(NULL));
	int b = rand() % 11;
	gotoxy(2 * b, 1);
	kytu(2);
	cout<<"\n";
	
	while(!kbhit()){
	srand(time(NULL));
	int a = rand() % 11;
	gotoxy(2 * b, 1);cout<<" ";
	gotoxy(2 * a, 1);	
	kytu(a);
	b = a;
	sleep(1);
	}
	system("pause");
	return 0;
}
