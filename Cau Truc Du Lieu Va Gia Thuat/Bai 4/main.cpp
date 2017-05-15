#include <iostream>
using namespace std;
const int MAX = 10;

//bai 4
bool kiemTra(int a);

void nhap(int *A, int n){
	for(int i = 0; i < n; i++){
		cout<<"\nNhap vao "<<i<<": ";
		cin>>A[i];
	}
}

void xuat(int *A, int n){
	for(int i = 0; i < n; i++){
		cout<<A[i]<<" ";
	}
}

int them(int *&A, int &n){
	int so;
	cout<<"\nNhap so them vao: "; cin>>so;
	
	int *temp = new int[n];
	for(int i = 0; i < n; i++){
		temp[i] = A[i];
	}
	
	delete[] A;
	
	A = new int[n + 1];
	
	for(int i = 0; i < n; i++){
		A[i] = temp[i];
	}
	delete[] temp;
	
	A[n] = so;
	n++;
	if( kiemTra(n) == true){
		return 0;
	}else{
		return 1;
	}
}
bool kiemTra(int a){
	if(a <= MAX){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n;
	int *A;
	cout<<"\nNhap Vao n: ";
	cin>>n;
	A = new int[n];
	cout<<"\nNhap Mang: ";
	nhap(A, n);
	cout<<"\nXuat Mang: ";
	xuat(A, n);
	cout<<"\nThem vao cuoi mang: ";
	if(them(A, n) == 1){
		cout<<"\n1 và Ko Them dc";
	}else{
		cout<<"\n0 và Them dc";
		cout<<"\n\nXuat Mang: ";
	}
	xuat(A, n);
	delete[] A;
	system("pause");
	return 0;
}
