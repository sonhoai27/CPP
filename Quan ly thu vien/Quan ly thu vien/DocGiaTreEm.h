#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "DocGia.h"

class DocGiaTreEm : public CDocGia
{
private:
	string tenNguoiDaiDien;
public:
	void Input();
	void Output();
	int  tinhTienLamThe();
	DocGiaTreEm();
	~DocGiaTreEm();
};

