#include "HinhTamGiac.h"

void HinhTamGiac::Input()
{
	cout << "\n\nHINH TAM GIAC";
	HinhHoc::Input();
	cout << "\nNhap Vao Day Cua HInh Tam Giac: ";
	cin >> day;
	cout << "\nNhap Vao Chieu Cao Cua Hinh Tam Giac: ";
	cin >> chieuCao;
}

void HinhTamGiac::Output()
{
	cout << "\n\nHinh Tam Giac";
	HinhHoc::Output();
	cout << "\nDay Cua Hinh Tam Giac: " << day;
	cout << "\nChieu Cao Cua Hinh Tam Giac: " << chieuCao;
}

double HinhTamGiac::dienTich()
{
	return donGiaMotMV*((day*chieuCao) / 2);
}

HinhTamGiac::HinhTamGiac()
{
}


HinhTamGiac::~HinhTamGiac()
{
}
