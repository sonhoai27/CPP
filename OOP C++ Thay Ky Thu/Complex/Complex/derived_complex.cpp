#include <iostream>
#include "complex.cpp"
#include <math.h>
using namespace std;

class derived_complex : public complex
{
public:
	derived_complex(int Re = 0, int Im = 0):complex(Re, Im){
		
	}
	
    float Modules(){
        return sqrtf(Re*Re + Im*Im);
    }
    
    derived_complex operator+ (derived_complex& sp);
	derived_complex operator+ (float a);
	friend istream& operator >>(istream& is, derived_complex& sp);
	friend ostream& operator <<(ostream& os, derived_complex& sp);
};

istream& operator >> (istream& is, derived_complex& sp){
	cout<<"Re = "; is>>sp.Re;
	cout<<"Im = "; is>>sp.Im;
	
	return is;
}
//ostream& operator <<(ostream& os, derived_complex& sp){
	if(sp.Im < 0){
		os<<sp.Re<<sp.Im<<"i";
	}else{
		os<<sp.Re<<"+"<<sp.Im<<"i";
	}
	
	return os;
}

derived_complex derived_complex::operator+(derived_complex& sp){
	derived_complex sp1(Re + sp.Re, Im + sp.Im);
	return sp1;
} 
derived_complex derived_complex::operator+(float sp){
	derived_complex sp1(sp + Re, Im);
	return sp1;
}
