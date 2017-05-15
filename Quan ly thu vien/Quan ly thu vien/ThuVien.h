#pragma once
#include "DocGiaTreEm.h"
#include "DocGiaNguoiLon.h"
#include <vector>
class CThuVien
{
private:
	vector <CDocGia*> ds_docGia;
public:
	void Input();
	void Output();
	int tinhTongTienLamThe();
	CThuVien();
	~CThuVien();
};

