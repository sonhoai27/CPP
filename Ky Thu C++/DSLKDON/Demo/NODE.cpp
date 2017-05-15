#include "NODE.h"


NODE::NODE()
{
	info = 0;
	next = NULL;
}

PTR NODE::GetNext()
{
	return next;
}

void NODE::SetNext(PTR temp)
{
	next = temp;
}

int NODE::GetInfo()
{
	return info;
}

void NODE::SetInfo(int x)
{
	info = x;
}

//NODE::~NODE(void)
//{
//	if (next != NULL)
//	{
//		delete[] next;
//	}
//}
