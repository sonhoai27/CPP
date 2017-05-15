#include "DocGia.h"


void CDocGia::Input()
{
	cin.ignore();
	cout << "Nhap ho ten doc gia: ";
	getline(cin, tenDocGia);
	cin.ignore();
	cout << "\nNhap vao ngay lap the(dd/mm/yyyy): ";
	getline(cin, ngayLapThe);

	cout << "\nNgay co hieu luc cua the: ";
	cin >> soThangCoHieuLuc;

}

void CDocGia::Output()
{
	cout << "Ho ten doc gia: "<<tenDocGia<<"\n";
	cout << "\nNgay lap the: " << ngayLapThe << "\n";
	cout << "\nSo thang co hieu luc: " << soThangCoHieuLuc << "\n";
	cout << "\n";

}


CDocGia::CDocGia()
{
}


CDocGia::~CDocGia()
{
}
