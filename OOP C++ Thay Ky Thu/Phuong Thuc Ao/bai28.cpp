#include <iostream>
#include<stdio.h>
using namespace std;

#include <string>
#include <string.h>

class AnPham{
protected:
	string tuaDe;
	double giaMua, soLuongBan, giaBan;		
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int tinhTong() = 0;
};

void AnPham::Nhap(){
	cout<<"\nNhap vao Ten: ";
	fflush(stdin);
	getline(cin,tuaDe);
	cout<<"\nNhap gia mua: ";cin>>giaMua;
	cout<<"\nNhap so luong ban: ";cin>>soLuongBan;
	cout<<"\nNhap gia ban: ";cin>>giaBan;
}

void AnPham::Xuat(){
	cout<<"\nTen: "<<tuaDe;
	cout<<"\nGia mua: "<<giaMua;
	cout<<"\nSo luong ban: "<<soLuongBan;
	cout<<"\nGia ban: "<<giaBan;
}

class Bang:public AnPham{
	string nhasx, thoiGian;
public:
	void Nhap(){
		AnPham::Nhap();
		cout<<"\nNhap nha san xuat: "; fflush(stdin);getline(cin,nhasx);	
		cout<<"\nNhap thoi gian: "; fflush(stdin);getline(cin,thoiGian);
	}
	void Xuat(){
		AnPham::Xuat();
		cout<<"\nThoi gian: "<<thoiGian;
		cout<<"\nNha san xuat: "<<nhasx;
	}
	int tinhTong(){
		return (soLuongBan * giaBan);
	}
};

class Dia:public AnPham{
	string nhasx, thoiGian;
public:
	void Nhap(){
		AnPham::Nhap();
		cout<<"\nNhap nha san xuat: "; fflush(stdin);getline(cin,nhasx);	
		cout<<"\nNhap thoi gian: "; fflush(stdin);getline(cin,thoiGian);
	}
	void Xuat(){
		AnPham::Xuat();
		cout<<"\nThoi gian: "<<thoiGian;
		cout<<"\nNha san xuat: "<<nhasx;
	}
	int tinhTong(){
		return (soLuongBan * giaBan);
	}
};

class Sach:public AnPham{
	string nhaxb, thoiGian;
	double soTrang;
public:
	void Nhap(){
		AnPham::Nhap();
		cout<<"\nNhap so trang: ";
		cin>>soTrang;
		cout<<"\nNhap nha san xuat: "; fflush(stdin);getline(cin,nhaxb);	
		cout<<"\nNhap thoi gian: "; fflush(stdin);getline(cin,thoiGian);
	}
	void Xuat(){
		AnPham::Xuat();
		cout<<"\nSo trang"<<soTrang;
		cout<<"\nThoi gian: "<<thoiGian;
		cout<<"\nNha xuat ban: "<<nhaxb;
	}
	
	int tinhTong(){
		return (soLuongBan * giaBan);
	}
};

int main(){
	Bang bg;
	bg.Nhap();
	bg.Xuat();
	cout<<bg.tinhTong();
	cout<<endl;
	system("pause");
	return 0;
}
