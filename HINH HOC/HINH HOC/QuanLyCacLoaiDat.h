#pragma once
#include <vector>
#include "HinhHoc.h"
#include "HinhChuNhat.h"
#include "HinhTamGiac.h"
#include "HinhThang.h"
class QuanLyCacLoaiDat
{
private:
	vector <HinhHoc *> ds_Dat;
public:
	void Input();
	void Output();
	double tongDienTich();
	QuanLyCacLoaiDat();
	~QuanLyCacLoaiDat();
};

