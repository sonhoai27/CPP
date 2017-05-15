#include<iostream>
using namespace std;

void nhapMang(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap vao a["<<i<<"]: ";
		cin >> a[i];
	}
}
void xuatMang(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void Them(int *a, int &n, int vt, int so) {

	int *temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}

	delete[] a;

	a = new int[n + 1];
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}

	delete[] temp;

	for (int i = n - 1; i >= vt; i--) {
		a[i + 1] = a[i];
	}
	a[vt] = so;
	n++;
}

void Xoa(int *a, int &n, int vt) {
	for (int i = vt + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	n--;

	int *temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}

	delete[] a;

	a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}

	delete[] temp;
}

int main() {
	int n;
	int *Arr;
	do{
		cout << "Nhap vao gioi hang cua mang: ";
		cin >> n;
		if (n <= 0) {
			cout << "Nhap sai, ";
		}
	} while (n <= 0);

	Arr = new int[n];
	
	nhapMang(Arr, n);
	xuatMang(Arr, n);

	int vt, so;
	/* cout << "Them 1 phần tử vào mảng: ";
	cout << "\nNhap vao vt can them: "; cin >> vt;
	cout << "\nNhap vao so can them: "; cin >> so;
	Them(Arr, n, vt, so); */

	cout << "Xoa 1 phần tử vào mảng: ";
	cout << "\nNhap vao vt can Xoa: "; cin >> vt;
	Xoa(Arr, n, vt);
	cout << "\n";
	xuatMang(Arr, n);

	delete[] Arr;
	system("pause");
	return 0;
}