#include <iostream>
using namespace std;

int main()
{
	int h;
	cout<<"Nhap vao chieu cao: ";
	cin>>h;
	
	//in tam giac can xuoi
	for(int i = 1; i<= h; i++)
	{
		for(int j = 1; j <= (2*h - 1); j++)
		{
			if((j >= h - i + 1  )	&& (j <= h + i - 1)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	
	cout<<"\n\n\n";
	//in tam giac can nguoc
	for(int i = h; i>=1; i--)
	{
		for(int j = 1; j <= (2*h - 1); j++)
		{
			if((j >= h - i + 1  )	&& (j <= h + i - 1)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
