
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

float check(char chc) {
	if ('a' <= chc && chc <= 'z') return 0;
	else
		if ('A' <= chc && chc <= 'Z') return 1;
		else
			if (48 <= chc && chc <= 57) return 2;
}

int main() {
	char c;
	char temp[50];
	int i = 0;
	while (true) {
		c = _getch();
		if (c == 13) {
			break;
		}
		else {
			if (check(c) == 0) {
				c -= 32;
				temp[i] = c;
				temp[i + 1] = '\0';
				cout << temp[i];
				i++;
			}
			else {
				if (check(c) == 1) {
					temp[i + 1] = '\0';
					temp[i] = c;
					cout << temp[i];
					i++;
				}
				else {
					if (check(c) == 2) {
						temp[i + 1] = '\0';
						temp[i] = c;
						cout << temp[i];
						i++;
					}
				}
			}
		}
	}

	cout << "\nKy Tu: " << temp << endl;
	system("pause");
	return 0;

}
