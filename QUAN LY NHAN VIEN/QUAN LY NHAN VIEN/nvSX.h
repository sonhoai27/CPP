#pragma once
#include "NhanVien.h"
class nvSX : public NhanVien
{
private:
	int soSanPham;
public:
	void Input();
	void Output();
	int tinhTienLuong();
	nvSX();
	~nvSX();
};

