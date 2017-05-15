#include <iostream>
using namespace std;
class sophuc{
	private:
		int Re, Im;
	public:
		sophuc(int a = 0, int b = 0);
		void Display();
		sophuc operator+ (sophuc& cp);
		sophuc operator- (sophuc& cp);
		sophuc operator! ();
		friend istream& operator >>(istream& is, sophuc& sp);
		friend ostream& operator <<(ostream& os, sophuc& sp);
};

sophuc::sophuc(int a, int b){
	Re = a; Im = b;
}
istream& operator >> (istream& is, sophuc& sp){
	cout<<"Re = "; is>>sp.Re;
	cout<<"Im = "; is>>sp.Im;
	
	return is;
}
ostream& operator <<(ostream& os, sophuc& sp){
	if(sp.Im < 0){
		cout<<sp.Re<<sp.Im<<"i";
	}else{
		cout<<sp.Re<<"+"<<sp.Im<<"i";
	}
	
	return os;
}

sophuc sophuc::operator+(sophuc& sp){
	sophuc sp1(Re + sp.Re, Im + sp.Im);
	return sp1;
} 
sophuc sophuc::operator!(){
	if(Im < 0){
		float spIm = (-1)*Im;
		sophuc sp1(Re, spIm);
		return sp1;
	}else{
		if(Im > 0){
			float spIm = (-1)*Im;
			sophuc sp1(Re, spIm);
			return sp1;
		}
	}
	
} 

int main(){
	sophuc sp1, sp2;
	cout<<"\nSo sp1: ";cin>>sp1; cout<<"\n\nSP1: "<<sp1<<endl;
	cout<<"\nSo sp2: ";cin>>sp2; cout<<"\n\nSP2: "<<sp2<<endl;
	sophuc a = sp1.operator+(sp2);
	cout<<"\n\nCong hai so phuc: "<<a<<endl;
	sophuc b = sp1.operator!();
	cout<<"\n\nSo phuc lien hop: "<<b<<endl;
	system("pause");
	return 0;
}
