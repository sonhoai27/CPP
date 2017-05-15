#include <iostream>

using namespace std;

int main (){
	int chieu_cao;
	cout<<"Nhap vao chieu cao: ";
	cin>>chieu_cao;
	for(int i = 1; i <= chieu_cao; i++){
		for(int j = 1; j <= 2*chieu_cao - 1; j++){
			if((chieu_cao - i +1 <= j) && (j <= chieu_cao + i - 1)){
				cout<<"0";
			}else{
				cout<<"-";
			}
		}cout<<endl;
	}
	system("pause");
	return 0;
}
