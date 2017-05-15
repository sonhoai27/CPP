#pragma once
#include "HinhHoc.h"
class HinhTamGiac : public HinhHoc
{
private:
	double day;
	double chieuCao;
public:
	void Input();
	void Output();
	double dienTich();
	HinhTamGiac();
	~HinhTamGiac();
};

