#pragma once
#include "Nodes_DSHOADON.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
class DS_HOADON
{
private:
	DS_VATTU *KhoXuLy;
	NODES_DSHOADON *contro;
public:
	DS_HOADON(DS_VATTU &kho);
	PTR newnode();
	void InsertLast();
	void XuatDSHOADON();
	void XuLyHOADON();
	~DS_HOADON();
};

