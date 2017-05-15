#include "HinhThang.h"

void HinhThang::Input()
{
	
	cout << "\n\nHINH THANG";
	HinhHoc::Input();
	cout << "\nNHap Vao Day Lon: ";
	cin >> dayLon;
	cout << "\nNhap Vao day Nho: ";
	cin >> dayNho;
	cout << "\nNhap Vao CHieu Cao: ";
	cin >> chieuCao;
}

void HinhThang::Output()
{
	cout << "\n\nHINH THANG";
	HinhHoc::Output();
	cout << "\nDay Lon: "<<dayLon;
	cout << "\nDay Nho: " << dayNho;
	cout << "\nChieu Cao: " << chieuCao;
}

double HinhThang::dienTich()
{
	return donGiaMotMV*((dayLon + dayNho)*chieuCao / 2);
}

HinhThang::HinhThang()
{
}


HinhThang::~HinhThang()
{
}
