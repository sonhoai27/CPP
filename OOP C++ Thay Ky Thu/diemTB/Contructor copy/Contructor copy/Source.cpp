////lam cac bai tap 8, 9, 10 trong sach OOP C++
//#include <iostream>
//
//using namespace std;
//
//class ARRAY {
//private:
//	float *v;
//	int soPhanTuMang;
//public:
//	ARRAY(int N);
//	ARRAY(int N, float a);
//	ARRAY(const ARRAY&copy);
//	~ARRAY();
//	void Nhap();
//	void Xuat();
//	int Get(float *&V);
//	void Out();
//	void ViTri();
//
//
//};
//
//void ARRAY::ViTri() {
//	cout << "\n" << v;
//}
//
//
//ARRAY::ARRAY(int N) {
//	soPhanTuMang = N;
//	v = new float[N];
//	for (int i = 0; i < N; i++) {
//		v[i] = 0;
//	}
//
//	cout << "\nDia chi v: " << &v << "\n\n";
//}
//ARRAY::ARRAY(int N, float a) {
//	soPhanTuMang = N;
//	v = new float[N];
//	for (int i = 0; i < N; i++) {
//		v[i] = a;
//	}
//
//}
//
//ARRAY::~ARRAY() {
//	delete[] v;
//}
//
//void ARRAY::Nhap() {
//	for (int i = 0; i < soPhanTuMang; i++) {
//		cout << "\nNhap vao " << i << ": ";
//		cin >> v[i];
//	}
//}
//void ARRAY::Xuat() {
//	for (int i = 0; i < soPhanTuMang; i++) {
//		cout << v[i] << " ";
//	}
//}
//
//int ARRAY::Get(float *&V) {
//	V = v;
//	return soPhanTuMang;
//}
//
//ARRAY::ARRAY(const ARRAY &copy) {
//	soPhanTuMang = copy.soPhanTuMang;
//	v = new float[soPhanTuMang];
//	cout<<"\nDia chi v: "<<&v;
//	for (int i = 0; i < copy.soPhanTuMang; i++) {
//		v[i] = copy.v[i];
//	}
//}
//
//int main() {
//	ARRAY mot(5);
//	mot.Nhap();
//	mot.Xuat();
//
//
//	cout << "\n\nCopy: ";
//	ARRAY b(mot);
//	b.Xuat();
//	/*ARRAY b(mot);
//	b.Xuat();
//	mot.ViTri();
//	cout << endl;
//	b.ViTri();*/
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class mang {
private:
	int size;
	float* a;
public:
	mang(int n) {
		size = n;
		a = new float[n];
	}
	mang(int n, float b) {
		size = n;
		a = new float[n];
		for (int i = 0; i < size; i++) {
			a[i] = b;
		}
	}
	void nhap() {
		for (int i = 0; i < size; i++) {
			cout << "nhap phan tu thu i " << i + 1 << ": ";
			cin >> a[i];
		}
	}
	void out() {
		cout << "Phan tu trong mang:\n";
		for (int i = 0; i < size; i++) {

			cout << "  " << a[i];
			if ((i + 1) % 10 == 0) {
				cout << "\n";
			}
		}
	}
	int get(float *&c) {
		*&c = *&a;
		return size;
	}
	~mang() {
		delete[]a;
	}
	mang(const mang&b) {
		size = b.size;
		a = new float[size];
		for (int i = 0; i < size; i++) {
			a[i] = b.a[i];
		}
	}
};
int main() {
	int n = 0;
	mang a(20);
	a.nhap();
	a.out();
	mang k(a);
	float *b;
	n = a.get(b);
	cout << n;
	for (int i = 0; i < n; i++) {

		cout << "  " << b[i];
		if ((i + 1) % 10 == 0) {
			cout << "\n";
		}
	}

	k.out();
	system("pause");
	return 0;
}