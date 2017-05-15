#include "HOADON.h"

int HOADON::AutoNumber = 0;

int HOADON::NgHienTai()
{
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	return ((1900 + newtime.tm_year) * 10000 + (newtime.tm_mon + 1) * 100 + newtime.tm_mday);
}

void HOADON::coutChar(int code)
{
	cout << (char)code;
	return;
}

void HOADON::VeMau()
{
	int x = 1, y = 1, cn = 90, cd = 30;
	SetColor(14);
	int col1 = 20, col2 = 15, col3 = 10;

	for (int i = x; i <= x + cn - 1; i++) // chieu ngang
	{
		gotoxy(i, y);
		coutChar(205);
		gotoxy(i, y + 2);
		coutChar(205);
		gotoxy(i, y + 4);
		coutChar(205);
		gotoxy(i, y + 6);
		coutChar(205);
		gotoxy(i, y + 8);
		coutChar(205);
		gotoxy(i, y + 10);
		coutChar(196);

		gotoxy(i, y + cd - 1);
		coutChar(205);
		if (i == x)
		{
			gotoxy(i, y);
			coutChar(201);
			gotoxy(i, y + cd - 1);
			coutChar(200);
		}
		if (i == x + cn - 1)
		{
			gotoxy(i, y);
			coutChar(187);
			gotoxy(i, y + cd - 1);
			coutChar(188);
		}
	}

	for (int i = y + 1; i < y + cd - 1; i++)
	{
		gotoxy(x, i);
		coutChar(186);
		gotoxy(x + cn - 1, i);
		coutChar(186);

		if (i == y + 1)
		{
			gotoxy(x + col1 + 1, i - 1);
			coutChar(203);
			gotoxy(x + col1 + 1, i);
			coutChar(186);
		}
		else if ((i == y + 2) || (i == y + 4) || (i == y + 6) || (i == y + 8))
		{
			gotoxy(x, i);
			coutChar(204);
			gotoxy(x + cn - 1, i);
			coutChar(185);
			if ((i != y + 8) && (i != y + 6))
			{
				gotoxy(x + col1 + 1, i);
				coutChar(206);
			}
		}
		else if (i < y + 6)
		{
			gotoxy(x + col1 + 1, i);
			coutChar(186);
		}
		else if (i == y + 10)
		{
			gotoxy(x, i);
			coutChar(199);
			gotoxy(x + cn - 1, i);
			coutChar(182);
		}
		if (i == y + 6)
		{
			gotoxy(x + col1 + 1, i);
			coutChar(202);
		}
	}

	for (int i = y + 8; i <= y + cd - 1; i++)
	{
		if (i == y + 8)
		{
			gotoxy(x + col2 + 1, i);
			coutChar(209);
			gotoxy(x + cn - 1 - col3 - 1, i);
			coutChar(209);
			gotoxy(x + cn - 1 - col3 - 1 - col3 - 1, i);
			coutChar(209);
		}
		else if (i == y + 10)
		{
			gotoxy(x + col2 + 1, i);
			coutChar(197);
			gotoxy(x + cn - 1 - col3 - 1, i);
			coutChar(197);
			gotoxy(x + cn - 1 - col3 - 1 - col3 - 1, i);
			coutChar(197);
		}
		else if (i == y + cd - 1)
		{
			gotoxy(x + col2 + 1, i);
			coutChar(207);
			gotoxy(x + cn - 1 - col3 - 1, i);
			coutChar(207);
			gotoxy(x + cn - 1 - col3 - 1 - col3 - 1, i);
			coutChar(207);
		}
		else
		{
			gotoxy(x + col2 + 1, i);
			coutChar(179);
			gotoxy(x + cn - 1 - col3 - 1, i);
			coutChar(179);
			gotoxy(x + cn - 1 - col3 - 1 - col3 - 1, i);
			coutChar(179);
		}
	}

	gotoxy(x, y + cd);
	SetColor(15);
}


void HOADON::Nhap()
{
	AutoNumber++;
	SoHD = AutoNumber;
	cout << "\nSo Hoa Don: "<<SoHD;
	NgLapHD = NgHienTai();
	cout << "\nNgay Lap Hoa Don: " << NgLapHD;
	cout << "\nLoai Hoa Don: ";
	do {
		char c;
		c = _getch();
		if (c == 'N' || c == 'n' || c == 'X' || c == 'x') {
			if (c == 'n' || c == 'x') {
				c -= 32;
			}
			Loai = c;
			cout << Loai;
			break;
		}
	} while (true);

	DsCon.Them();
}

void HOADON::Xuat()
{
	VeMau();
	cout << "\n\t\t\tXUAR HOA DON";
	cout << "\nSo Hoa Don:\t " << "Ngay Lap Hoa Don:\t " << "Loai Hoa Don:\t " << endl;
	cout << SoHD << "\t\t"<< NgLapHD << "\t\t"<< Loai << endl;
	DsCon.Xuat();
}

HOADON::HOADON()
{
}


HOADON::~HOADON()
{
}
