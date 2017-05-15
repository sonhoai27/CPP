#include <iostream>
#include <unistd.h>
#include "windows.h"
#include "mylib.h"

int thap[3];

void inThap(int n){
	int i, j;
    for (i = 0; i<10; i++)
    {
        gotoxy(15, 5 + i);
        cout << "|";
        gotoxy(30, 5 + i);
        cout <<"|";
        gotoxy(45, 5 + i);
        cout << "|";
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * i + 1; j++)
        {
        	//i = 0, j = 0, n = 1
            gotoxy(15 - i + j, 15 - n + i); //gotoxy(15, 14)
            cout << "=";
        }
    }
}

//void chuyenD(int soDia, int m, int n){
//	int j;
//	for(j = 15 - ; ){
//		
//	}
//}

void chuyenDia(int a, int c, int b, int soDia){
	if(soDia == 1) return;
	else{
	chuyenDia(soDia - 1, a, b, c);
//	chuyenD(soDia, a, c);
	cout<<"chuyen "<<soDia<<" tu "<<a<<" sang "<<c<<" \n";
	chuyenDia(soDia- 1, b, c, a);
	}
	
}


int main(){
	int soDia;
	cout<<"\nNhap vao so dia: "; cin>>soDia;
	thap[0] = soDia;
	thap[1] = 0;
	thap[2] = 0;
	    cout<<thap[0];
	chuyenDia(1, 3, 2, soDia);
	inThap(soDia);
	cout<<endl<<endl<<endl;
	system("pause");
	return 0;
}
