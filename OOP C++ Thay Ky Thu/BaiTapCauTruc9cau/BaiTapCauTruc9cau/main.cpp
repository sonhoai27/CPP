
#include<string>
#include <iostream>
#include <conio.h>
using namespace std;

class sinhvien{
public:
	int maso;
	string ten, ho, malop;
public:
	
	void Input(int ms){
		cout<<"\nNhap vao ten: ";
		fflush(stdin);
		getline(cin, ten);

		cout<<"\nNhap vao ho: ";
		fflush(stdin);
		getline(cin, ho);

		cout<<"\nNHap vao ma lop: ";
		fflush(stdin);
		getline(cin, malop);

		maso = ms;
	}
	
	void Output(){
		cout<<"\nMa so: "<<maso;
		cout<<", Ten: "<<ten;
		cout<<", Ho: "<<ho;
		cout<<", Ma lop: "<<malop;
	}
};

class ds_sv{
	
	sinhvien *sv;
	int soluong;
public:
	
	void nhapds(){
		int sl = 0;
		int ms;
		do{
			cout<<"\nNhap ms: ";cin>>ms;
			cout<<"\nNhap vao sinh vien thu "<<sl+ 1;
			if(ms > 0){
				sv[sl].Input(ms);
				sl++;
			}else{
				break;
			}
		}while(ms > 0);
		soluong = sl;
}

	void xuatds(){
		
		int phantrang = soluong/2;
		for(int i = 0; i < soluong; i++){
			sv[i].Output();
		}
//		while(phantrang <= soluong){
//			char et = getch();
//			et = getch();
//			if(et == 80){
//				system("cls");
//				for(int i = phantrang; i < phantrang + 2; i++){
//					sv[i].Output();
//				}
//			}
//		}
	}
	
	ds_sv(int sl = 1000){
		sv=  new sinhvien[sl];
	}

	~ds_sv(){
		delete[] sv;
	}
	
	void sapxep(){
		for(int i = 0; i < soluong; i++){
		for(int j = i + 1; j < soluong; j++){
			if(sv[i].maso > sv[j].maso){
				int temp;
				temp =  sv[i].maso;
				sv[i].maso = sv[j].maso;
				sv[j].maso = temp;
			}
		}
	}
}

	void themDanhSac(){
		int ms; cout<<"\nNhap mas: ";cin>>ms;
		sv[soluong].Input(ms);
		soluong++;
		sapxep();
}

	int xoasv_ms(int mssv){
		int vtri;
		for(int i = 0; i < soluong; i++){
			if(sv[i].maso == mssv){
				vtri = i;
				for(int j = vtri + 1; j < soluong; j++){
					sv[j - 1] = sv[j];
				}
				soluong--;
				return 0;
				break;
			}
		}
		
		return 1;
	}
	
	int xoasv_ml(string mlop){
		int dem = 0;
		for(int i = 0; i < soluong; i++){
			if(sv[i].malop == mlop){
				dem++;
				for(int j = i + 1; j < soluong; j++){
					sv[j - 1] = sv[j];
				}
				soluong--;
			}
		}
		return dem;
	}

};


int main(){
	ds_sv ds;
	ds.nhapds();
	ds.xuatds();
	
//	cout<<"\nSAP XEP:";
//	ds.sapxep();
//	ds.xuatds();
//	cout<<endl;
//	ds.themDanhSac();
//	ds.xuatds();
//	ds.xuatds();
//	char c;
//	c=getch();
//	c=getch();
//	cout << (int)c << endl;
//	int mssv;
//	cout<<"\n\n\nXoa 1 sinh vien co ms:";
//	cin>>mssv;
//	cout<<ds.xoasv_ms(mssv);
//	if(ds.xoasv(mssv) == 1){
//		cout<<"\n Ko xoa dc, ko tim thay ";
//	}else{
//		cout<<"\n\nXoa thanh cong";
//	}
//	
	ds.xuatds();
	
	cout<<"\nXoa theo ma lop: ";
	cout<<"\nDa xoa dc: "<<ds.xoasv_ml("N2");
	ds.xuatds();
	cout<<endl<<endl;
	system("pause");
	return 0;
}
