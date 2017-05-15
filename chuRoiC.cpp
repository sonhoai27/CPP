#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include "mylib.h"
#include <unistd.h>
#define col 20
using namespace std;

//random 1 chu so va chuyen qua ky tu
//dung vong lap while de in ký tu ra theo thu tu ngau nhien
//khi nhap vao thi xoa ky tu do.
//kiem ra, bang cach lay tu ban phim vao bang ham getch().
//sau do kiem tra, neu dung voi tu ban phim thi tra ve 1, nguoc lai tra ve 0.
//ham chu roi int. Sleep();


int chuRoi(int tocDo){
    srand(time(NULL));
    int so = rand()%26+1;
    int doDai = 0;
	
	while(doDai < col && !kbhit()){
		gotoxy(so * 2, doDai + 3); cout<<" ";
		gotoxy(so * 2, doDai + 4); cout<<char(so + 64);
		Sleep(tocDo);
		doDai++;
	}
	
	gotoxy(so * 2, doDai); cout<<" ";
	
	if(doDai < 20){
		char kiemTra = getch();
		if(kiemTra == char(64 + so) || kiemTra == char(96 + so)){
			return 1;
		}else{
			return 0;
		}
	}else{
		gotoxy(so * 2, 20); cout<<":(";
		return 0;
	}
	
}

int main(){
	gotoxy(0, 0);
	cout<<"\n20 Diem La Thang\n\n\n";
	int diemNgChoi = 1, diemMayChoi = 0;
	while(diemNgChoi > diemMayChoi){
		if(chuRoi(90) == 1){
			diemNgChoi++;
			gotoxy(40, 0); cout<<"Diem Nguoi Choi: "<<diemNgChoi;
		}else{
			diemMayChoi++;
			gotoxy(40, 1); cout<<"Diem May Choi: "<<diemMayChoi;
		}
	}
	
	gotoxy(50, 5); cout<<"\n\t\t\t\tBan Thua Roi!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	system("pause");
	return 0;
}
