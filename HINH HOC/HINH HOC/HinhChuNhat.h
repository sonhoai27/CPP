#pragma once
#include "HinhHoc.h"
class HinhChuNhat : public HinhHoc
{
private:
	double chieuDai;
	double chieuRong;
public:
	void Input();
	void Output();
	double dienTich();
	HinhChuNhat();
	~HinhChuNhat();
};

