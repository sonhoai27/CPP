#pragma once
#include "HinhHoc.h"
class HinhThang : public HinhHoc
{
private:
	double dayLon;
	double dayNho;
	double chieuCao;
public:
	void Input();
	void Output();
	double dienTich();
	HinhThang();
	~HinhThang();
};

