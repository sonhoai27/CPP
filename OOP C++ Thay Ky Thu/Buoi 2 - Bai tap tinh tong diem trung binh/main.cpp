//su dung du lieu tinh static data de tinh trung binh diem cua sinh vien
#include <iostream>
using namespace std;

//Nhap va xuat diem
float trungBinh(int *A, int &n){
	static float s = 0;
	if(n > 0){
		s = s + A[n - 1];
	}else{
		for(int i = 0; i < n; i++){
		s = s + A[i];
		}
	}
	
	return s/n;
}

int main(){
	int n = 0;
	int *A;
	float diem;
	A = new int[n];
	
	for(int i = 1; i <= 6; i++){
		cout<<"\nNhap vao them mot diem: ";
		cin>>diem;
		A[n++] = diem;
		cout<<"\nTong diem: "<<trungBinh(A, n);
	}
	cout<<"\n\n";
	delete[] A;
	system("pause");
	return 0;
}
