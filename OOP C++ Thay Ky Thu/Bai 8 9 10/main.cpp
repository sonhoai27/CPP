//lam cac bai tap 8, 9, 10 trong sach OOP C++
#include <iostream>

using namespace std;

class ARRAY {
private:
	float *v;
	int soPhanTuMang;
public:
	ARRAY(int N, float a = 0);
	ARRAY(const ARRAY&copy);
	~ARRAY();
	void Nhap();
	void Xuat();
	int Get(float *&V);
	void Out();


};


ARRAY::ARRAY(int N, float a) {
	soPhanTuMang = N;
	v = new float[N];
	for (int i = 0; i < N; i++) {
		v[i] = a;
	}

}

ARRAY::~ARRAY() {
	delete[] v;
}

void ARRAY::Nhap() {
	for (int i = 0; i < soPhanTuMang; i++) {
		cout << "\nNhap vao " << i << ": ";
		cin >> v[i];
	}
}
void ARRAY::Xuat() {
	for (int i = 0; i < soPhanTuMang; i++) {
		cout << v[i] << " ";
	}
}

int ARRAY::Get(float *&V) {
	*&V = *&v;
	return soPhanTuMang;
}

ARRAY::ARRAY(const ARRAY &copy) {
	soPhanTuMang = copy.soPhanTuMang;
	v = new float[soPhanTuMang];
	cout<<"\nDia chi v: "<<&v;
	for (int i = 0; i < copy.soPhanTuMang; i++) {
		v[i] = copy.v[i];
	}
}

int main() {
	ARRAY mot(5, 3);
	mot.Nhap();
	mot.Xuat();
	
	float *pt;
	float dc = mot.Get(pt);
	cout<<"\nGet va Out: ";
	for(int i =0; i < dc; i++){
		cout<<pt[i]<<" ";
	}
	cout << "\n\nCopy: ";
	ARRAY b(mot);
	b.Xuat();
	system("pause");
	return 0;
}
