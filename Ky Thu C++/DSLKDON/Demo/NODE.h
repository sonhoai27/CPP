#pragma once
#include <iostream>
using namespace std;

//dinh nghia con tro kieu NODE
typedef class NODE* PTR;

class NODE
{
private:
	int info;
	PTR next;
public:
	NODE();
	PTR GetNext();
	void SetNext(PTR);
	int GetInfo();
	void SetInfo(int);
	~NODE();
	friend class DSLK;
};

