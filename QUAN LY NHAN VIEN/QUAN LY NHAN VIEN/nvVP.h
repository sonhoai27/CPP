#pragma once
#include "NhanVien.h"
class nvVP : public NhanVien
{
private:
	int mucLuong;
	int soNgayNghi;
public:
	void Input();
	void Output();
	int tinhTienLuong();
	nvVP();
	~nvVP();
};

