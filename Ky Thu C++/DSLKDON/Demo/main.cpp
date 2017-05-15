#include "DSLK.h"

int main()
{

	DSLK ds;
	int k;
	//Them vao dau danh sach
	//Nhap ki tu khac 0 de them vao dau danh sach

	while(1)
	{
		cout << endl << "Nhap so nguyen k = ";
		cin >> k;
		if (k == 0)
		{
			ds.XuatDS();
			break;
		}
		ds.InsertFist(k);
	}

	cout << endl;
	system("pause");
	return 0;
}