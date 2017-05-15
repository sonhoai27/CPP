#include <iostream>
using namespace std;
class Mang{
	private:
	int Arr[100];
	int n;
	public:
		void NhapMang();
		void XuatMang();
		int phanTuLonNhat();
		int phanTuNhoNhat();
	
};

void Mang :: NhapMang(){
	cout<<"\t\t\nNhap Mang";
	do{
		cout<<"\nNhap vao so luong phan tu mang: ";
		cin>>n;
		if(n <= 0 || n > 100){
			cout<<"Error, ";
		}
	}while(n <= 0 || n > 100);
	for(int i = 0; i < n; i++){
		cout<<"\nNhap vao phan tu thu "<<i<<" : ";
		cin>>Arr[i];
	}
}

void Mang :: XuatMang(){
	cout<<"\t\t\nXuat Mang:\n";
	for(int i = 0; i < n; i++){
		cout<<Arr[i]<<" ";
	}
}

int Mang :: phanTuLonNhat(){
	int Max = Arr[0];
	for(int i = 1; i < n; i++){
		if(Max <= Arr[i]){
			Max= Arr[i];
		}
	}
	
	return Max;
}

int main()
{
	Mang mang;
	mang.NhapMang();
	mang.XuatMang();
	cout<<"\nPhan Tu Lon Nhat: "<<mang.phanTuLonNhat();
	cout<<endl;
	system("pause");
	return 0;
}

