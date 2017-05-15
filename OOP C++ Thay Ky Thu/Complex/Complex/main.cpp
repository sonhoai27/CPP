
#include <iostream>
#include "derived_complex.cpp"
using namespace std;

int main() {
	int so = 10;
    derived_complex sp1, sp2;
    cout<<"\nSo sp1: ";cin>>sp1; cout<<"\n\nSP1: "<<sp1<<endl;
	cout<<"\nSo sp2: ";cin>>sp2; cout<<"\n\nSP2: "<<sp2<<endl;
	derived_complex a = sp1.operator+(sp2);
	cout<<"\n\nCong hai so phuc: "<<a<<endl;
	derived_complex b = sp1.operator+(so);
	cout<<"\n\nCong hai so phuc: "<<b<<endl;
	cout<<"\n\nSP1: "<<sp1<<endl;
	cout<<"\n\nSP2: "<<sp2<<endl;
    cout<<"\n\n\n";
    system("pause");
    return 0;
}
