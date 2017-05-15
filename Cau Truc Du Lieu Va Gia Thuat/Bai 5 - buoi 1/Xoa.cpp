//xoa phan cac phan tu trong mang
#include <iostream>
using namespace std;

void XoaPT(int *&a, int &n, int vt);
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

void xoa(int *A, int &n){
	int so, dem = 0; cout<<"\nNhap vao so muon xoa: ";cin>>so;
	cout<<"\n\nDia Chi Ban Dau"<<&A;
	for(int i = 0; i < n; i++){
		if(A[i] == so){
			XoaPT(A, n, i);
			dem +=1;
		}		
	}
	
	cout<<"\nDem: "<<dem;
}

void XoaPT(int *&a, int &n, int vt)
{
	for(int i = vt + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
	cout<<"\n\nN: "<<n;
	int *temp = new int[n]; 
	for(int i = 0; i < n; i++)
	{
		temp[i] = a[i]; 
	}

	delete[] a;
	
	a = new int[n];
	cout<<"\n\nDia Chi"<<&a;
	
	for(int i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
	delete[] temp;
	
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
	cout<<"\nXoa Trung: ";
	xoa(A, n);
	cout<<"\nXuat Mang: ";
	xuat(A, n);
	
	system("pause");
	return 0;
}
