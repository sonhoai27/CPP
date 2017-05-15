#pragma once
#include <iostream>
using namespace std;
#include "DocGia.h"
#include <string>

class DocGiaNguoiLon : public CDocGia
{
private:
	string CMNN;
public:

	void Input();
	void Output();
	int tinhTienLamThe();
	DocGiaNguoiLon();
	~DocGiaNguoiLon();
};

