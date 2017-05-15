#include "QuanLyCacLoaiDat.h"

void QuanLyCacLoaiDat::Input()
{
	int numberChoose = 0;
	while (true) {
		system("cls");
		HinhHoc *x;
		cout << "\n\n\n\t\t\tCAC LOAI DAT";
		cout << "\n\n1. Dat Hinh Chu Nhat";
		cout << "\n\n2. Dat Hinh Thang";
		cout << "\n\n3. Dat Hinh Tam Giac";
		cout << "\n\n0. Thoat";
		cout << "\n\n\n\n\t\tNhap Vao Lua Chon: ";
		cin >> numberChoose;
		if (numberChoose == 1) {
			x = new HinhChuNhat;
			x->Input();
			ds_Dat.push_back(x);
		}
		else {
			if (numberChoose == 2) {
				x = new HinhThang;
				x->Input();
				ds_Dat.push_back(x);
			}
			else {
				if (numberChoose == 3) {
					x = new HinhTamGiac;
					x->Input();
					ds_Dat.push_back(x);
				}
				else {
					if (numberChoose == 0) {
						break;
					}
					else {
						cout << "Nhap Sai";
						system("pause");
					}
				}
			}
		}
	}
}

void QuanLyCacLoaiDat::Output()
{
	for (int i = 0; i < ds_Dat.size(); i++) {
		cout << "\n\n\n\n\t\tDanh Sach Dat " << i;
		ds_Dat[i]->Output();
		cout << "\n";
	}
}

double QuanLyCacLoaiDat::tongDienTich()
{
	double sum = 0;
	for (int i = 0; i < ds_Dat.size(); i++) {
		sum = sum + ds_Dat[i]->dienTich();
	}
	return sum;
}

QuanLyCacLoaiDat::QuanLyCacLoaiDat()
{
}


QuanLyCacLoaiDat::~QuanLyCacLoaiDat()
{
}
