#include <iostream>
using namespace std;

class ARRAY {
protected:
	float *u, *v;
private:
	float *a;
	int n;
public:
	ARRAY(int N = 2);
	~ARRAY();
	int GET(float *&V);
	void Nhap();
};

class MERGE {
private:
		ARRAY a, b;
public:
	MERGE(float n1, float n2);
	void Tong();
};

MERGE::MERGE(float n1, float n2){
	a = new ARRAY[n1];
}

ARRAY::ARRAY(int N) {
	n = N;
	a = new float[n];

}

ARRAY::~ARRAY() {
	delete[] a;
}
int ARRAY::GET(float *&V) {
	*&V = *&a;
	return n;
}
void ARRAY::Nhap() {
	for (int i = 0; i < n; i++) {
		cout << "\nNhap vao phan tu thu " << i << ": ";
		cin >> *(a+i);
	}
}
int main() {
	ARRAY mang(4);
	mang.Nhap();
	float *pt;
	int sopt = mang.GET(pt);
	cout << "\n\tIn Mang Da Nhap: ";
	for (int i = 0; i < sopt; i++) {
		cout << pt[i] << " ";
	}
	cout << "\n\n";
	system("pause");
	return 0;
}
