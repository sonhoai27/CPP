#include <iostream>
#define MAX 3
using namespace std;

int bangTien[MAX] = { 5,2,1 };
int bangSoTo[MAX];
//j là s? giá tr? có the dat dc o tang do...
///so tang
void doiTien(int i, int soTienCL)
{
	for (int j = 0; j <= soTienCL / bangTien[i]; j++)
	{		
		if (i != (MAX - 1))
		{
			bangSoTo[i] = j;
			doiTien(i + 1, soTienCL - bangTien[i] * bangSoTo[i]);
		}
		else
		{
			bangSoTo[i] = soTienCL / bangTien[i];
			for (int temp = 0; temp < MAX; temp++)
				cout << bangSoTo[temp] << " ";
			cout << endl;
			break;			
		}
	}
}
int main()
{
	int tien;
	cin >> tien;
	doiTien(0, tien);
	system("pause");
	return 0;
}
