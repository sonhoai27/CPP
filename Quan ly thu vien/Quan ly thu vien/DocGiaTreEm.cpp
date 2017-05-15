#include "DocGiaTreEm.h"

void DocGiaTreEm::Input()
{
	CDocGia::Input();
	cin.ignore();
	cout << "Nhap ten nguoi dai dien: ";
	getline(cin, tenNguoiDaiDien);
}

void DocGiaTreEm::Output()
{
	CDocGia::Output();
	cout << "\nNguoi dai dien: " << tenNguoiDaiDien;
}

int DocGiaTreEm::tinhTienLamThe()
{
	return soThangCoHieuLuc * 5000;
}

DocGiaTreEm::DocGiaTreEm()
{
}


DocGiaTreEm::~DocGiaTreEm()
{
}
