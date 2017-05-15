#include <iostream>
#include "DanhSachNV.h"

int main() {
	DanhSachNV *x = new DanhSachNV;
	x->Input();
	x->Output();

	delete x;
	system("pause");
	return 0;
}