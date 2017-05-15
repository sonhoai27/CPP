#pragma once
#include <iostream>
using namespace std;
#include <string>

class CDocGia
{
protected:

	string tenDocGia;
	string ngayLapThe;
	int soThangCoHieuLuc;

public:

	virtual void Input();
	virtual void Output();
	virtual int  tinhTienLamThe() = 0;
	CDocGia();
	~CDocGia();
};

