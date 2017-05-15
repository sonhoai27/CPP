#include <iostream>

using namespace std;



//Nhap mang

void nhapMang(int *Arr, int n){
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]: ";
		cin>>Arr[i];
	}
}

//Xuat mang

void xuatMang(int *Arr, int n){
	for(int i = 0; i < n; i++){
		cout<<Arr[i]<<" ";
	}
}

void xuatSoChan(int *a, int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			cout<<a[i]<<" ";
		}
	}
}


int main(){
	int n;
	
	do{
		cout<<"nhap gioi hang cua mang: ";
		cin>>n;
		if(n <= 0){
			cout<<"Nhap sai, ";
		}
	}while(n <= 0);
	
//	//canh 1:
//	int *a; //khai báo ra con tro a, co nhiem vu tro den o nho dau tien cua mang a[0] de qua li mang.
//	
//	a = new int[n]; //khai bao mang dong co n phan tu duoc quan li boi con tro a
//	
	//cách 2:
	
	int *a = new int[n];
	
	nhapMang(a, n);
	xuatMang(a, n);
	cout<<endl;
	xuatSoChan(a, n);
	delete[] a;
	system("pause");
	return 0;
}
