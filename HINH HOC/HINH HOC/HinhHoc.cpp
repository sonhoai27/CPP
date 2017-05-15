#include "HinhHoc.h"
void HinhHoc::Input()
{
	cin.ignore();
	cout << "\n\n\t\t\t\tTGONG TIN N MANH DAT CUA MOT CONG TY";
	cout << "\n\nNhap Vao Ma So Cua Mot Mieng Dat: ";
	getline(cin, maSo);
	cout << "\n\nNhap Vao Don Gia Moi Metter Vuong: ";
	cin >> donGiaMotMV;
}
void HinhHoc::Output()
{
	cout << "\n\nMa So Mieng Dat La: " << maSo;
	cout << "\n\nDon Gia Cua Moi Mieng Dat: " << size_t(donGiaMotMV);
}

HinhHoc::HinhHoc()
{
}


HinhHoc::~HinhHoc()
{
}
