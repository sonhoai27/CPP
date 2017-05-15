#pragma once
#include "NODE.h"

class DSLK
{
private:
	PTR First;
public:
	DSLK( );
	PTR NewNode();
	void InsertFist(int);
	void XuatDS();
	PTR getFirst();
	//~DSLK(void);
};

