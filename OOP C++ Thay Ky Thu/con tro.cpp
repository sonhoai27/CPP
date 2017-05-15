#include <iostream>
using namespace std;
int &f(int& a, int b)
{
	b+=a++;
	return (a);
}
int main()
{
	int i=2, j=4;
	int k=f(i,j); //2, 4
	k++;
	cout<<i<<" "<<j<<" "<<k<<endl; //xuat 3 4 4
	
   	int &l=f(i,j);
	l++; //l chinh là i
	cout<<i<<" "<<j<<" "<<l<<endl; //xuat 5 4 5
	
	system("pause");
	return 0;
}

