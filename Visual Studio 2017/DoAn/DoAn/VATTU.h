#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
const int MaxSize = 200;

class VATTU
{
private:
	string DVT, TenVT, MaVT;
	int SoLuongTon;
public:
	void Nhap();
	void Xuat();
	string getMAVT();
	string getTENVT();
	string getDVT();
	int getSLT();
	void setMAVT(string x);
	void setTENVT(string x);
	void setDVT(string x);
	void setSLT(int x);
	VATTU();
	~VATTU();

};

