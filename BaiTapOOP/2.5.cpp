#include <iostream>
using namespace std;

class tinhTong{
	
	private:
	int n, i;
	int s;
	
	public:
		void Input();
		int Tong();
		void Output();
};

void tinhTong :: Input(){
	cout<<"\t\t\nTinh Tong S = 1 + 2 + 3 + ... + n";
	cout<<"\n\nNhap vao N: ";
	cin>>n;
	Tong();
}

int tinhTong :: Tong(){
	s = 0;
	for(int i = 1; i <= n; i++){
		s = s + i;
	}
	
	return s;
}

void tinhTong :: Output(){
	cout<<"\n\nTong La: "<<s<<endl;
}

int main(){
	tinhTong TinhTong;
	TinhTong.Input();
	TinhTong.Output();
	
	system("pause");
	return 0;
}


