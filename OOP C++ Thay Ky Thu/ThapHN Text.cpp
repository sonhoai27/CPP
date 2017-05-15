#include <iostream>
using namespace std;

void thapHN(int n, char cotA, char cotC, char cotB){
	if(n == 1) cout<<"Chuyen dia "<<n<<" tu cot "<<cotA<<" sang cot"<<cotC;
	else{
		thapHN(n - 1, cotA, cotB, cotC);
		cout<<"Chuyen dia "<<n<<" tu cot "<<cotA<<" sang cot"<<cotC;
		thapHN(n- 1, cotB, cotC, cotA);
	}
}
int main(){
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	char a = 'A', b = 'B', c ='C';
	thapHN(n, a, b, c);
	system("pause");
	return 0;
}
