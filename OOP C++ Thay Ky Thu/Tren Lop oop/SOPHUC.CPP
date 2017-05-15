//Bai 19:lop so phuc co cac phep toan +,<<,>>
#include <iostream.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip.h>
class sophuc
{
	float re,im;
	public:
	sophuc(float r=0, float i=0)
	{
		re=r; im=i;
	}
	sophuc operator+ (sophuc &z)
	{
		sophuc x(re+z.re,im+z.im);
		return x;
	}
	friend istream& operator >> (istream& is, sophuc& z);
	friend ostream& operator << (ostream& os, sophuc& z);
};
istream& operator >> (istream& is, sophuc& z)
{
	is>>z.re>>z.im;
	return (is);
}
ostream& operator << (ostream& os, sophuc& z)
{
	if (z.im>=0)	os<<z.re<<'+'<<z.im<<"*i";
	else		os<<z.re<<z.im<<"*i";
	return (os);
}
void main()
{
	clrscr();
	sophuc z1,z2,z3;
	cout<<"\nNhap z1:";	cin>>z1;
	cout<<"\nNhap z2:";	cin>>z2;
	z3=z1+z2;
	cout<<"\nXuat z3:"<<z3;
	getch();
}