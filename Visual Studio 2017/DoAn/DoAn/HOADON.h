#pragma once
#include "VATTU.h"
#include "DS_VATTU.h"
#include "mylib.h"
class HOADON
{
private:
	int NgHienTai();
	void VeMau();
	void coutChar(int code);
public:
	int SoHD, NgLapHD;
	char Loai;
	DS_VATTU DsCon;
	int static AutoNumber;
	void Nhap(); //truyen vao ds kho, kho 
	void Xuat(); //xuat to hoa don ra
	HOADON();
	~HOADON();
};

