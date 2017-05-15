#include "ThuVien.h"

int main() {
	CThuVien *x = new CThuVien;

	x->Input();
	x->Output();
	cout << "\n\n\nTinh tien lam the";
	cout<< x->tinhTongTienLamThe();

	delete x;
	
	cout << "\n\n";
	system("pause");
	return 0;
}