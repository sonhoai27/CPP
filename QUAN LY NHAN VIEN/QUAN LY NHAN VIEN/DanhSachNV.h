#pragma once
#include "nvSX.h"
#include "nvVP.h"
#include "NhanVien.h"
#include <vector>

class DanhSachNV
{
private:
	vector <NhanVien *> ds_nhanVien;
public:
	void Input();
	void Output();
	DanhSachNV();
	~DanhSachNV();
};

