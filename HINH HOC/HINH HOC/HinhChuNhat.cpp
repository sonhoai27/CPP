#include "HinhChuNhat.h"

void HinhChuNhat::Input()
{
	HinhHoc::Input();
	do {
		cout << "\nNhap Vao Chieu Dai Va Chieu Rong Cua Hinh Chu Nhat: ";
		cin >> chieuDai >> chieuRong;
	} while (chieuDai < 0 || chieuRong < 0);
}

void HinhChuNhat::Output()
{
	cout << "\n\nHinh Chu Nhat";
	HinhHoc::Output();
	cout << "\nChieu Dai La: "<<chieuDai<<" Va Chieu Rong: "<<chieuRong;
}

double HinhChuNhat::dienTich()
{
	return donGiaMotMV*(chieuDai*chieuRong);
}

HinhChuNhat::HinhChuNhat()
{
}


HinhChuNhat::~HinhChuNhat()
{
}
