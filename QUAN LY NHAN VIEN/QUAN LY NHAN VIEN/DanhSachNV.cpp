#include "DanhSachNV.h"

void DanhSachNV::Input()
{
	int numberChoose = 0;
	while (true) {
		system("cls");
		cout << "\n\n\n\t\t\t\tQUAN LY NHAN VIEN";
		cout << "\n\nLua Chon Nhan Vien San Xuat Hay Nhan Vien Van Phong";
		cout << "\n1. Nhan Vien San Xuat";
		cout << "\n2.Nhan Vien Van Phong";
		cout << "\n0.Thoat";
		cout << "\n\n\n\nNhap Vao Lua Chon: ";
		cin >> numberChoose;
		NhanVien *x;
		if (numberChoose == 1) {
			x = new nvSX;
			x->Input();
			ds_nhanVien.push_back(x);
		}
		else {
			if (numberChoose == 2) {
				x = new nvVP;
				x->Input();
				ds_nhanVien.push_back(x);
			}
			else {
				if (numberChoose == 0) {
					break;
				}
				else {
					cout << "\n\nLua Chon Khong Hop Le\n\n";
					system("pause");
				}
			}
		}
	}
}

void DanhSachNV::Output()
{
	for (int i = 0; i < ds_nhanVien.size(); i++) {
		cout << "\n\n\n\t\t\t\tDANH SACH NHAN VIEN THU: "<<i<<" ";
		ds_nhanVien[i]->Output();
		cout << "\n\n";
	}
}


DanhSachNV::DanhSachNV()
{
}


DanhSachNV::~DanhSachNV()
{
}
