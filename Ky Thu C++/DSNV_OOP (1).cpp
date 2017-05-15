#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
//#include <windows.h>
#include <mylib.h>
const int MAX = 20;
using namespace std;
class NHANVIEN {
	int manv;
	char ho[30], ten [10];
	
	public:
		static int msmax;
		NHANVIEN (char *HO, char *TEN){
			msmax++;
			manv=msmax;
		  strcpy(ho, HO); strcpy (ten, TEN)	;
		}
		NHANVIEN(){
			msmax++;
			manv=msmax;
			cout << "HO :" ; fflush (stdin); gets (ho);
			cout << "Ten: " ; fflush (stdin); gets (ten);
			
		}
		void Xuat(){
		  cout << manv << "\t\t" << ho << "\t\t" << ten ;
	   }
};
int NHANVIEN::msmax=0;
class nodeNV {
	public:
		NHANVIEN nv;
		nodeNV *next ;
}; 
typedef nodeNV *PTR;
class PHONGBAN{
	char mapb [10];
	char tenpb [50];
	nodeNV *contro;
	public :
		void Nhap() {
			cout << "Ma  PB :" ; fflush (stdin); gets (mapb);
			cout << "Ten PB :" ; fflush (stdin); gets (tenpb);
			contro=NULL;
			
		}
		void Xuat() {
			cout << mapb << "\t\t" << tenpb ;
			// in dsnv
		}
  void Insert_Last ( ) {
  PTR p = new nodeNV;
  p->next = NULL;
  if (contro==NULL) contro = p ;
  else
  { PTR last ;
    for (last =contro;last->next!= NULL;last=last->next ) ; 
    last->next = p; 
  }
 }
 
// void delete_node(NhanVien x){
// 	//first = con tro
// 	PTR p = new nodeNV;
// 	for(p = contro; p != NULL; p=p->next){
// 		if(p->nv == x) return p;
//	 }
//	 return NULL;
// }
 void NhapDSNV () {
 	int sonv =2; // se xoa
 	for (int i=1 ; i<=sonv; i++)
 	 Insert_Last ();
 }
 void LietKeDSNV () {
 	for (PTR p=contro; p !=NULL ; p=p->next)
 	{  p->nv.Xuat(); cout << endl;
    }
}
};
class DSPB {
	PHONGBAN pb [MAX];
	int n=0;
	public:
	  DSPB (int N) {
	  	n=N;
	  	for (int i=0 ; i < n; i++) {
	  	  pb[i].Nhap();
	  	  pb[i].NhapDSNV();
	  	}
	  }	
	  void LietKe () {
	  	for (int i=0 ; i < n; i++) {
	  	  pb[i].Xuat();
	  	  pb[i].LietKeDSNV();
	  	  cout <<endl;
	  }
	  }
};

int main (){
	DSPB dspb(2);
	dspb.LietKe();
	
}

