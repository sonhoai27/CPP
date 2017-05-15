#include "DocGiaNguoiLon.h"

void DocGiaNguoiLon::Input()
{
	CDocGia::Input();
	cin.ignore();
	cout << "\nNhap vao so chung minh nhan dan: ";
	getline(cin, CMNN);
}

void DocGiaNguoiLon::Output()
{
	CDocGia::Output();
	cout << "\nSo chung minh nhan dan: "<<CMNN;
}

int DocGiaNguoiLon::tinhTienLamThe()
{
	return soThangCoHieuLuc * 10000;
}

DocGiaNguoiLon::DocGiaNguoiLon()
{
}


DocGiaNguoiLon::~DocGiaNguoiLon()
{
}
