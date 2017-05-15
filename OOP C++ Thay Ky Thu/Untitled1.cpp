#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class mang{
private:
	int size;
	float* a;
public:
	mang(int n){
		size = n;
		a = new float[n];
	}
	mang(int n, float b){
		size = n;
		a = new float[n];
		for (int i = 0; i < size; i++){
			a[i]=b;
		}
	}
	void nhap(){
		for (int i = 0; i < size; i++){
			cout << "nhap phan tu thu i " << i+1<<": " ;
			cin >> a[i];
		}
	}
	void out(){
		cout << "Phan tu trong mang:\n";
		for (int i = 0; i < size; i++){
			
			cout << "  " << a[i] ;
			if ((i + 1) % 10 == 0){
				cout << "\n";
			}
		}
	}
	int get(float *&c){
		*&c = *&a;
		cout<<"\n\nA: "<<a;
		cout<<"\n\nA: "<<c;
		return size;
	}
	~mang(){
		delete []a;
	}
	mang(const mang&b){
		size = b.size;
		a = new float[size];
		for (int i = 0 ; i < size; i++){
			a[i] = b.a[i];
		}
	}
};
int main(){
	int n=0;
	mang a(20);
	a.nhap();
	a.out();
	mang k(a);
	float *b;
	n = a.get(b); 
	cout <<n;
//	for (int i = 0; i < n; i++){
//
//		cout << "  " << b[i];
//		if ((i + 1) % 10 == 0){
//			cout << "\n";
//		}
//	}

	k.out();
	system("pause");
	return 0;
}
