#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int MaxSize = 200;

class VATTU {
private:
	string DVT, TENVT;
	//DVT thi cho khach hang chon....liet ke ra tat ca don vi tinh
	string MAVT; int SoLuongTon;
public:
	void Nhap() {
		cout << "\nNhap MAVT: ";
		fflush(stdin);
		getline(cin, MAVT);
		cout << "\nTen vat tu:";
		fflush(stdin);
		getline(cin, TENVT);
		cout << "\nDon vi tinh: ";
		fflush(stdin);
		getline(cin, DVT);
		cout << "\nSo luong ton: ";
		cin >> SoLuongTon;
	}

	void Xuat() {
		cout << "\nMa vat tu: " << MAVT;
		cout << "\nTen vat tu: " << TENVT;
		cout << "\nDon vi tinh: " << DVT;
		cout << "\nSo luong ton: " << SoLuongTon;
	}

	//lay thong tin
	string getMAVT() {
		return MAVT;
	}
	string getTENVT() {
		return TENVT;
	}

	string getDVT() {
		return DVT;
	}
	int getSLT() {
		return SoLuongTon;
	}

	//set
	void setMAVT(string mvt) {
		MAVT = mvt;
	}
	void setTENVT(string tvt) {
		TENVT = tvt;
	}

	void setDVT(string dv_t) {
		DVT = dv_t;
	}

	void setSLT(int x) {
		DVT = x;
	}
};

class DS_VATTU {
	int n;
	VATTU nodes[MaxSize];
public:
	//kiem tra ds co rong hay khog
	int Empty() {
		if (n == 0);
		return 0;
	}

	int Full() {
		if (n == MaxSize);
		return MaxSize;
	}

	void them();
	void Xoa_VATTU(string MS_VATTU);
	void Sua_VATTU(string mvt);
	void Xuat_DS_VATTU();
	int getSoLuongVatTu() {
		return n;
	}

};

void DS_VATTU::them() {
	if (Empty() == 0) {
		n = 0;
		if (n < MaxSize) {
			nodes[n].Nhap();
			n++;
		}
		else {
			cout << "\nDanh sach day";
		}
	}
}

void DS_VATTU::Xoa_VATTU(string MS_VATTU) {
	for (int i = 0; i < n; i++) {
		if (nodes[i].getMAVT() != MS_VATTU) {
			cout << "\nKhong co ma vat tu " << MS_VATTU;
		}
		else {
			for (int j = i; j < n - 1; j++) {
				nodes[j] = nodes[j + 1];
			}
			n--;
		}
	}
}

void DS_VATTU::Sua_VATTU(string mvt) {
	int luaChonSua;
	string tenvt, mavt;
	for (int i = 0; i < n; i++) {
		if (nodes[i].getMAVT() == mvt) {
			while (true) {
				cout << "\n1. Sua MVT";
				cout << "\n2. Sua TENVT";
				cout << "\n0. Thoat";
				cout << "\nNhap vao lua chon: "; cin >> luaChonSua;
				if (luaChonSua == 0) {
					break;
				}
				else {
					switch (luaChonSua) {
					case 1:
						cout << "\nNhap vao MVT moi: "; fflush(stdin); getline(cin, mavt); nodes[i].setMAVT(mavt); break;
					case 2:
						cout << "\nNhap vao TENVT moi: "; fflush(stdin); getline(cin, tenvt); nodes[i].setTENVT(tenvt); break;
					}
				}
			}
		}
		else {
			cout << "\nKo co Vat tu do";
		}
	}
}
void DS_VATTU::Xuat_DS_VATTU() {
	for (int i = 0; i < n; i++) {
		nodes[i].Xuat();
		cout << "\n";
	}
}

class NHANVIEN {
	string MANV, Ho, Ten;
	bool Phai;
public:
	void Nhap() {
		cout << "\nNhap ma nhan vien: ";
		fflush(stdin);
		getline(cin, MANV);
		cout << "\nNhap ten: ";
		fflush(stdin);
		getline(cin, Ten);
		cout << "\nNhap ho: ";
		fflush(stdin);
		getline(cin, Ho);
		cout << "\nNhap phai: ";
		cin >> Phai;
	}
	void Xuat() {
		cout << "\nMa nhan vien: " << MANV;
		cout << "\nTen: " << Ten;
		cout << "\nHo: " << Ho;
		if (Phai == true) {
			cout << "\nPhai: Nam";
		}
		else {
			cout << "\nPhai: Nu";
		}
	}
};

class DS_NHANVIEN {

};


class HOADON {
	int SoHD;
	DS_VATTU ds_vt;
	int ngayLapHD, dd, mm, yy;
	char Loai;
public:
	int static nHoaDon; //so hoa don tu tang
	void HD_Nhap(); //nhap hoa don vao kho
	void HD_Xuat(); //xuat hoa don tu khoa ra cho khach hang
	void NhapNgay(); //xu ly ngay nhap vao
	HOADON();
	void Xuat_HOADON();//xuat thong tin cua mot hoa don
	void Kiem_Tra_Kho(DS_VATTU a, string ma, int slt);
};

void HOADON::Kiem_Tra_Kho(DS_VATTU a, string ma, int slt) {
	for (int i = 0; i <a.getSoLuongVatTu(); i++) {
	}
}

int HOADON::nHoaDon = 0;

HOADON::HOADON() {
	nHoaDon++;
	SoHD = nHoaDon;
	cout << "\nNgay Lap Hoa Don: ";
	cin >> ngayLapHD;
	cout << "\nLoai Hoa Don 'N' va 'X': ";
	//bat su kien nhap vao loai, neu khac n  hoac x thi phai nhap lai
	do {
		fflush(stdin);
		char c;
		c = getch();
		if (c == 'N' || c == 'n' || c == 'X' || c == 'x') {
			Loai = c;
			cout << Loai;
			break;
		}
	} while (true);

	if (Loai == 'N' || Loai == 'n') {
		HD_Nhap();
	}
	else {
		if (Loai == 'X' || Loai == 'x') {
			HD_Xuat();
		}
	}
}

//loai phieu nhap
void HOADON::HD_Nhap() {
	cout << "\nNhap thong tin Phieu Nhap: ";
	do {
		ds_vt.them();
		int slt = ds_vt.getSoLuongVatTu();
		int mavt = 
		Kiem_Tra_Kho();
	} while (true);
}

//loai phieu xuat
void HOADON::HD_Xuat() {
	cout << "\nNhap thong tin Phieu Xuat: ";
	ds_vt.them();
}

//xuat thong tin cua mot hoa don
void HOADON::Xuat_HOADON() {
	cout << "\nSo hoa don: " << SoHD;
	cout << "\nNgay: " << ngayLapHD;
	cout << "\nLoai: " << Loai;
	cout << "\nThong tin Phieu: ";
	ds_vt.Xuat_DS_VATTU();
}


void HOADON::NhapNgay() {

}

class Nodes_DS_HOADON {
public:
	HOADON hd;
	Nodes_DS_HOADON *next;
};

typedef Nodes_DS_HOADON * PTR;

class DS_HOADON {
	Nodes_DS_HOADON
};
// void HOADON::Insert_Last(){
// 	PTR p = new Nodes_HoaDon;
// 	p->next = NULL;
// 	if(contro == NULL) contro = p;
// 	else {
// 		PTR last;
// 		for(last = contro; last->next != NULL; last = last->next) {
// 			last->next = p;
// 		}
// 	}
// }

int main() {
	//	DS_VATTU ds_vt;
	//	ds_vt.ThemMoi();
	//	ds_vt.Xuat_DS_VATTU();
	//	ds_vt.Sua_VATTU("N14");
	//	ds_vt.Xuat_DS_VATTU();
	HOADON hs;

	system("pause");
	return 0;
}

