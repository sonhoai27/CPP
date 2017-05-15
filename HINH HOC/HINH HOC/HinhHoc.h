#pragma once
#include <iostream>
using namespace std;
#include <string>;
class HinhHoc
{
protected:
	string maSo;
	double donGiaMotMV;
public:
	virtual void Input();
	virtual void Output();
	virtual double dienTich() = 0;
	HinhHoc();
	~HinhHoc();
};

