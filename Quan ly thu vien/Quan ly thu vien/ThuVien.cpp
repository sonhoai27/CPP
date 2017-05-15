#include "ThuVien.h"
void CThuVien::Input() 
{
	int luaChon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t----MENU THU VIEN BOOKstore----";
		cout << "\n\n\t 1. Doc Gia Tre Em";
		cout << "\n\n\t 2. Doc Gia Nguoi Lon";
		cout << "\n\n\t 0. Thoat";

		cout << "\n\n\n\n\tNhap lua chon: ";
		cin >> luaChon;
		CDocGia *x;
		if (luaChon == 1) {
			x = new DocGiaTreEm;
			cout << "\n\n\tNHAP THONG TIN DOC GIA\n\n";
			x->Input();
			ds_docGia.push_back(x);
		}
		else {
			if (luaChon == 2) {
				x = new DocGiaNguoiLon;
				cout << "\n\n\tNHAP THONG TIN DOC GIA\n\n";
				x->Input();
				ds_docGia.push_back(x);
			}
			else {
				if (luaChon == 0) {
					break;
				}
				else {
					cout << "\n\nLua Chon Khong Hop Le\n\n";
					system("pause");
				}
			}
		}
	}
}

void CThuVien::Output()
{
	for (int i = 0; i < ds_docGia.size(); i++) {
		cout << "Doc thong tin doc gia thu " << i << ": ";
		ds_docGia[i]->Output();
		cout << "\n";
	}
}

int CThuVien::tinhTongTienLamThe()
{
	int sum = 0;
	for (int i = 0; i < ds_docGia.size(); i++) {
		sum = sum + ds_docGia[i]->tinhTienLamThe();
	}
	return sum;
}

CThuVien::CThuVien()
{
}


CThuVien::~CThuVien()
{
}
