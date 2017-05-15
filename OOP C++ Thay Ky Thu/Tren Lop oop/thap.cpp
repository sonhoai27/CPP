#include <iostream>
#include <unistd.h>
#include "windows.h"
#include "mylib.h"

using namespace std;
int thap[3];
// Ham dung de dieu khien mau bang so

void vethap(int n)
{
    int i, j;
    for (i = 0; i<10; i++)
    {
        gotoxy(15, 5 + i);
        cout << char(186);
        gotoxy(30, 5 + i);
        cout << char(186);
        gotoxy(45, 5 + i);
        cout << char(186);
    }
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<2 * i + 1; j++)
        {
            gotoxy(15 - i + j, 15 - n + i);
            cout << char(219);
        }
    }
}
// Chuyen khoi i tu cot a qua cot b
void c_khoi(int a, int b, int i, int n)
{
    i--;
    int j, k;
    for (j = 15 - thap[a - 1]; j>2; j--)
    {
        for (k = 0; k<2 * i + 1; k++)
        {
            gotoxy(15 * a - i + k, j);
            cout << " ";
        }
        if (j >= 5)
        {
            gotoxy(15 * a, j);
            cout << char(186);
        }
        for (k = 0; k<2 * i + 1; k++)
        {
            gotoxy(15 * a - i + k, j - 1);

            cout << char(219);
        }
        sleep(1);
    }
    if (a<b)
    {
        for (j = 15 * a; j <= 15 * b; j++)
        {
            for (k = 0; k<2 * i + 1; k++)
            {
                gotoxy(j - i + k, 2);

                cout << char(200);
            }
            sleep(1);
            for (k = 0; k<2 * i + 1; k++)
            {
                gotoxy(j - i + k, 2);
                cout << " ";
            }
        }
    }
    else
    {
        for (j = 15 * a; j >= 15 * b; j--)
        {
            for (k = 0; k<2 * i + 1; k++)
            {
                gotoxy(j - i + k, 2);

                cout << char(219);
            }
            sleep(1);
            for (k = 0; k<2 * i + 1; k++)
            {
                gotoxy(j - i + k, 2);
                cout << " ";
            }
        }
    }
    for (j = 2; j<15 - thap[b - 1] - 1; j++)
    {
        for (k = 0; k<2 * i + 1; k++)
        {
            gotoxy(15 * b - i + k, j);
            cout << " ";
        }
        if (j >= 5)
        {
            gotoxy(15 * b, j);

            cout << char(186);
        }
        for (k = 0; k<2 * i + 1; k++)
        {
            gotoxy(15 * b - i + k, j + 1);

            cout << char(219);
        }
        sleep(1);
    }
    thap[a - 1]--;
    thap[b - 1]++;
}

void c_thap(int a, int c, int b, int m, int n)
{
    if (m<1)
        return;
    char et;
    et = getch();  //cho nhan phim enter roi luu ma ASCII enter vao et
        if (et == 13)
    {
        c_thap(a, b, c, m - 1, n);
        c_khoi(a, c, m, n);
        c_thap(b, c, a, m - 1, n);
        et == 0;
    }
}

int main()
{
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    system("cls"); //xoa man hinh
    vethap(n);
    thap[0] = n;

    thap[1] = 0;
    thap[2] = 0;
    gotoxy(1, 20);
    cout << "\t\t\tNhan phim bat ki de tiep tuc";
    getch();
    gotoxy(1, 20);
    cout << "                                                                  ";
    cout << "\n\t\t>>>>CHUONG TRINH MO PHONG THAP HA NOI VOI "<<n<<" DIA<<<<\n";
    cout << "\n\t\t\t(Nhan phim enter de di chuyen dia)";
    c_thap(1, 3, 2, n, n);
    gotoxy(1, 20);
    system("pause");
    return 0;
}
