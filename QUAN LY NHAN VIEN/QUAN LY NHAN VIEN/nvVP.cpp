#include "nvVP.h"

void nvVP::Input()
{
	NhanVien::Input();
	cout << "\n\nNhap vao muc luong: ";
	cin >> mucLuong;
	cout << "\n\nNhap vso so ngay nghi: ";
	cin >> soNgayNghi;
}

void nvVP::Output()
{
	NhanVien::Output();
	cout << "\nMuc luong: "<<mucLuong;
	cout << "\nSo ngay nghi: "<<soNgayNghi;
	cout << "\nTong Luong Cong Ty Phai Tra: " << tinhTienLuong();
}

int nvVP::tinhTienLuong()
{
	return mucLuong - soNgayNghi * 10000 + 100000 + ((2016 - namVaoLam) * 20000);
}

nvVP::nvVP()
{
}


nvVP::~nvVP()
{
}
