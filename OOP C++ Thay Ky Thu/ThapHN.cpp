#include <iostream>
#include "mylib.h"
#include <unistd.h>
#include <math.h>
using namespace std;

#define X1 20
#define X2 40
#define X3 60

int td;
void in_ra_cot(int soDia){
	sleep(1);
	gotoxy(X1, 20); cout<<"A";
	gotoxy(X2, 20); cout<<"B";
	gotoxy(X3, 20); cout<<"C";
	
	
	
	//
	gotoxy(14, 19); cout<<"-------------";
	gotoxy(34, 19); cout<<"-------------";
	gotoxy(54, 19); cout<<"-------------";
	for(int i = 0; i < soDia + 5; i++){
		gotoxy(20, 18 - i); cout<<"|";
		gotoxy(40, 18 - i); cout<<"|";
		gotoxy(60, 18 - i); cout<<"|";
	}
	
	//in ra dia
	for(td = 0; td < soDia; td++){
		gotoxy(20, 18 - td);
		cout<<soDia - td;	
	}
}

void thapHN(int n, char cotA, char cotC, char cotB){
	if(n == 1){
		sleep(1);
		cout<<"Chuyen dia "<<n<<" tu cot "<<cotA<<" sang cot "<<cotC<<endl;
		gotoxy(X3, 18); cout<<"1";
		sleep(1);
		gotoxy(X1, 18); cout<<"|";
	}
	
	else{
		thapHN(n - 1, cotA, cotB, cotC);
		sleep(2);
		cout<<"Chuyen dia "<<n<<" tu cot "<<cotA<<" sang cot"<<cotC<<endl;
		sleep(2);
		thapHN(n- 1, cotB, cotC, cotA);
	}
}

void inXoaDia(){
	int i = 0;
	gotoxy(20, 50); cout<<"=="<<i + 1<<"==";
	do{
		sleep(1);
		i++;
		gotoxy(20, 50 - i + 1); cout<<"     ";
		gotoxy(20, 50 - i); cout<<"=="<<i+1<<"==";
		
	}while( i < 9);	
}

int main(){
	char a = 'A', b = 'B', c ='C';
	
	int soDia;
	do{
		cout<<"\nNhap vao so dia: ";
		cin>>soDia;
		if(soDia <= 0){
			cout<<"Nhap sai, ";
		} 
	}while(soDia <= 0);
	
	
	in_ra_cot(soDia);
	
	for(int i = 1; i < 8; i++){
		cout<<endl;
	}
	thapHN(soDia, a, b, c);

	
	
	
	
	
	
	
	
	for(int i = 1; i < 18; i++){
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
