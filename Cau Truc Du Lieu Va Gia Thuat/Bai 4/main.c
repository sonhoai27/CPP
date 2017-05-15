#include <iostream>
using namespace std;
const int MAX = 15;

void them(int *A, int n){
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
bool kiemTra(int *A, int MAX, int n){
	
}
int main(){
	int n;
	int *A;
	cout<,"\nNhap Vao n: ";
	cin>>a;
	cout<<"\nNhap Mang: ";
	them(A, n);
	cout<<"\nXuat Mang: ";
	xuat(A, n);
	A = new int[n];
	delet[] A;
	system("pause");
	return 0;
}
