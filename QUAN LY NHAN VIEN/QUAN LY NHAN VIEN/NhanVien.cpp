#include "NhanVien.h"

void NhanVien::Input()
{
	cin.ignore();
	cout << "\n\nNhap vao ho va ten NHAN VIEN: ";
	getline(cin, hoTen);
	cout << "\n\nNhap vao NAM vao lam: ";
	cin >> namVaoLam;

}

void NhanVien::Output()
{
	cout << "\n\nHo Va Ten Cua Nhan Vien La: " << hoTen;
	cout << "\n\nNam Vao Lam Cua Nhan Vien: " << namVaoLam;
}

NhanVien::NhanVien()
{
}


NhanVien::~NhanVien()
{
}
