#include "QuanLyCacLoaiDat.h"

int main()
{
	QuanLyCacLoaiDat *x = new QuanLyCacLoaiDat;
	x->Input();
	x->Output();
	cout << "\nTong Dien Tich Cac Mieng Dat: ";
	cout<<size_t(x->tongDienTich());
	delete x;
	cout << "\n\n";
	system("pause");
	return 0;
}