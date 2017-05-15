

#include <iostream>
#include <conio.h>
#include<fstream>
#include<string>
#include<string.h>
#pragma warning(disable:4996)
using namespace std;



class sinhvien{
public:
	int maso;
	char ten[10], ho[20], malop[10];
public:
	
	void Input(int ms){
		cout<<"\nNhap vao ten: ";
		fflush(stdin);
		gets(ten);

		cout<<"\nNhap vao ho: ";
		fflush(stdin);
		gets(ho);

		cout<<"\nNHap vao ma lop: ";
		fflush(stdin);
		gets(malop);

		maso = ms;
	}
	
	void Output(){
		cout<<"\nMa so: "<<maso;
		cout<<", Ten: "<<ten;
		cout<<", Ho: "<<ho;
		cout<<", Ma lop: "<<malop;
	}
	
	void inputFile(int ms,char fho, char ften, char fmalop){
		maso = ms;
		ho[20] = fho;
		ten[10] = ften;
		malop[10] = fmalop;

	}
	
};

class ds_sv{
	
	sinhvien *sv;
	int soluong;
public:
	int Empty()  { return soluong == 0; }
	int Full()   { return soluong == 1000; }
	void nhapds(){
		int sl = 0;
		int ms;
		do{
			cout<<"\nNhap ms: ";cin>>ms;
			cout<<"\nNhap vao sinh vien thu "<<sl+ 1;
			if(ms > 0){
				sv[sl].Input(ms);
				for(int i = 0; i < sl; i++){
					for(int j = i + 1; j < sl; j++){
						if(sv[i].maso > sv[j].maso){
							int temp;
							temp =  sv[i].maso;
							sv[i].maso = sv[j].maso;
							sv[j].maso = temp;
						}
			}
	}
			sv[sl].Output();
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

	int xoasv_ms(){
		int mssv;
		cout<<"\nNhap vao mssv: "; cin>>mssv;
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
	
	int xoasv_ml(){
		char mlop[10];
		fflush(stdin);
		gets(mlop);
		ktraChu(mlop);
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
	
	char ktraChu(char kt[]){
      	int n = strlen(kt);
      	for(int i = 0; i < n; i++)
		{
      		if((kt[i] == ' ') || (kt[i] == '-')|| (kt[i] == '.' )|| (kt[i] == '_')){
      			for ( int j = i ; j < n - 1 ; j++ ){
      				kt[j] = kt[j + 1]; //giong nhu xoa mang vay thoi
				  }
				n--;
      			kt[n] = '\0';
      			i--;
			  }
			if (kt[i] >='a' && kt[i] <='z' ) 
	      		{
	            kt[i] = kt[i]-32;
	     		 }  
		  }
	
		return kt[];
	}
	
	//sap xep theo ma lop
	void sxMLOP(){
		sapxep();
		//sinhvien *temp;
		for(int i = 0; i < soluong; i++){
			for(int j = i + 1; j < soluong; j++){
				if(sv[i].malop == sv[j].malop){
					break;
				}else{
					if(sv[i].malop != sv[j].malop){
//						if()
					}
				}
			}
		}
	}
	
	void docFile(){
	ifstream Filein;
	Filein.open("C:\\Users\\sonH\\Desktop\\input.txt", ios_base::in);
	if (Filein.fail() == true){
		cout << "\nfile not found";
		
	}
	else {
		cout<<"\nOK";
		while (!Filein.eof()){
			int i = 0;
			int MS;
			Filein >> MS;
			char ho[20], ten[10]; char lop[10];
			Filein.getline(ho, 20, '.');
			Filein.getline(ten, 10, '.');
			Filein.getline(lop, 10, '.'); 
			sv[i].inputFile(MS, ho[20], ten[10], lop[10]);
			i++;
		}
		Filein.close();
	}
	
}
void ghifile(){
	ofstream fileout;
	fileout.open("C:\\Users\\sonH\\Desktop\\output.txt", ios_base::out);
	for (int i = 0; i < soluong; i++){
		cout<<"\nGhi vao:";
		int ms;
		cin>>ms;
		sv[i].Input(ms);
		fileout <<sv[i].ho<<endl;
	}
	fileout.close();
}
	
};

void menu(){
	ds_sv ds;
	int numberChoose = 0;
	
	while(true){
		system("cls");
		cout<<"\t\t\tQuan Li Sinh Vien";
		cout<<"\n1. NhapSV";
		cout<<"\n2. XuatSV";
		cout<<"\n3. Sap XeP";
		cout<<"\n4. Xoa the mssv";
		cout<<"\n5. Xoa theo lop";
		cout<<"\n0. Thoat\n";
		cin>>numberChoose;
		
		if(numberChoose == 1){
			ds.nhapds();
			system("pause");
		}else{
			if(numberChoose == 2){
				ds.xuatds();
				system("pause");
			}else{
				if(numberChoose == 3){
					ds.sapxep();
					ds.xuatds();
						system("pause");
				}else{
					if(numberChoose == 4){
						ds.xoasv_ms();
						ds.xuatds();
						system("pause");
					}else{
						if(numberChoose == 5){
							ds.xoasv_ml();
							ds.xuatds();
							system("pause");
						}else{
							if(numberChoose == 0){
								break;
							}
						}
					}
				}
			}
		}
	}
	
}

int main(){
//	menu();
	ds_sv ds;
	char a[100];
	gets(a);
	cout<<ds.ktraChu(a);
	system("pause");
	return 0;
}
