#pragma once
#include <iostream>
using namespace std;
#include <string>
class NhanVien
{
protected:
	string hoTen;
	int namVaoLam;
public:
	virtual void Input();
	virtual void Output();
	virtual int tinhTienLuong() = 0;
	NhanVien();
	~NhanVien();
};

