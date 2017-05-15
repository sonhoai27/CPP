#include <iostream>

using namespace std;

int UCLN(int m, int n){
	cout<<n;
	if(n == 0){
		return m;
	}else{
		
	return UCLN(n, m%n);
	
	}
}
int main()
{
	int m, n;
	cout<<"\nNhap vao M Va N: ";
	cin>>m>>n;
	cout<<UCLN(m, n);
	system("pause");
	return 0;
}

//
//5
//10
//////
//if 5 > 10 (5/10) sai
//if(5 < 10)(10/5) = 2
