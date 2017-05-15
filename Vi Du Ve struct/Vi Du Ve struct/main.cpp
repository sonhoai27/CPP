#include <iostream>
using namespace std;
#include <string>

typedef struct SinhVien
{
	int maSo;
	string ten;
};

void inThongTinSV(SinhVien sinhvien)
{
	cout << "\nThong Tin: " << sinhvien.maSo << ",  " << sinhvien.ten<<"\n";
}


int main()
{
	SinhVien sinhVien[100];
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\t\tNhap Vao Sinh Vien Thu " << i << ": ";
		cin>>sinhVien[i].maSo;
		cin >> sinhVien[i].ten;
	}

	for (int i = 0; i <3; i++)
	{
		inThongTinSV(sinhVien[i]);
	}
	system("pause");
	return 0;
}