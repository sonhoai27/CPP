
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

float check(string chc) {
	if ("a" <= chc && chc <= "z") return 0;
	if ("A" <= chc && chc <= "Z") return 1;
	if(chc == 13) return 2;
}

void typeChar(string c, string temp){
		while (true) {
		c = getch();
		if(check(c) == 2){
			break;
		}else{
			if(check(c) == 0){
				uppercase(c);
				cout<<c;
			}else{
				if(check(c) == 1){
					cout<<c;
				}
			}
		}
	}
}

int main() {
	


	cout <<"\nKy Tu: "<< temp << endl;
	system("pause");
	return 0;

}
