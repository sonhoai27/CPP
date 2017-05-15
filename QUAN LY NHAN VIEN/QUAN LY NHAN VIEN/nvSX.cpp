#include "nvSX.h"
#include "NhanVien.h"

void nvSX::Input()
{
	NhanVien::Input();
	cout << "\n\nNhap vao So San Pham: ";
	cin >> soSanPham;
}

void nvSX::Output()
{
	NhanVien::Output();
	cout << "\nSo San Pham: " << soSanPham;
	cout << "\nTong Luong Cong Ty Phai Tra: " << tinhTienLuong();
}

int nvSX::tinhTienLuong()
{
	return soSanPham * 10000 + 100000 + ((2016 -namVaoLam)*20000 );
	
}

nvSX::nvSX()
{
}


nvSX::~nvSX()
{
}
