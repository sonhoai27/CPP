#include "DSLK.h"


DSLK::DSLK()
{
	First = NULL;
}

PTR DSLK::NewNode()
{
	PTR p;
	p = new NODE();
	if (p == NULL)
	{
		cout << endl << "Loi cap phat bo nho!";
		exit(0);
	}
	return p;
}

void DSLK::InsertFist(int x)
{
	PTR p = NewNode();
	if (First == NULL)
	{
		p->next=NULL;
	}
	else 
	{
		p->next=First;
	}
	p->info=x;
	First = p;
}

void DSLK::XuatDS()
{
	PTR p = First;
	int dem = 0;
	if (p == NULL)
	{
		cout << "Khong co phan tu nao trong ds";
		exit(0);
	}
	/*while (p != NULL)
	{
		dem++;  
		cout << endl << "Phan tu " << dem << " = " << p->GetInfo();
		p = p->GetNext();
	}*/
	for ( p = First; p != NULL; p = p->next){
		
		cout  << p->info;
		dem++;
	}
		
}

//DSLK::~DSLK(void)
//{
//	if (First != NULL)
//	{
//		delete[] First;
//	}
//}
PTR DSLK::getFirst(){
	return First;
};