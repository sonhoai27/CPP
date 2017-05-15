#include <iostream>
using namespace std;
int FB2(int n){
	if(n <= 1){
		return n;
	}
	
	return FB2(n - 1) + FB2(n -2);
}
int main(){
	int n;
	cout<<"Nhap vao n: ";
	cin>>n;
	
	for(int i = 0; i <= n; i++){
		cout<<FB2(i)<<" ";
	}
	cout<<endl;
	system("pause");
	return 0;
}
