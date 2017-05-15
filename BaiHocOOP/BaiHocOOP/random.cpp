#include <iostream>
using namespace std;

typedef struct Complex
{
	double Real;
	double Imaginary;
};

Complex SetComplex(double R, double I);
Complex AddComplex(Complex C1, Complex C2);
Complex SubComplex(Complex C1, Complex C2);
void DisplayComplex(Complex C);

int main()
{
	Complex C1, C2, C3, C4;
	C1 = SetComplex(1.0, 2.0);
	C2 = SetComplex(-3.0, 4.0);
	cout << "\nSO Phuc Thu Nhat: ";
	DisplayComplex(C1);
	cout << "\nSo Phuc Thu 2: ";
	DisplayComplex(C2);
	C3 = AddComplex(C1, C2);
	C4 = SubComplex(C1, C2);
	cout << "\nTong cua hai so phuc: ";
	DisplayComplex(C3);
	cout << "\nHieu cua hai so phuc: ";
	DisplayComplex(C4);
	cout << "\n\n";
	system("pause");
	return 0;
}

Complex SetComplex(double R, double I)
{
	Complex Temp;
	Temp.Real = R;
	Temp.Imaginary = I;
	return Temp;
}

Complex AddComplex(Complex C1, Complex C2)
{
	Complex Temp;
	Temp.Real = C1.Real + C2.Real;
	Temp.Imaginary = C1.Imaginary + C2.Imaginary;
	return Temp;

}

Complex SubComplex(Complex C1, Complex C2)
{
	Complex Temp;
	Temp.Real = C1.Real - C2.Real;
	Temp.Imaginary = C1.Imaginary - C2.Imaginary;
	return Temp;

}

void DisplayComplex(Complex C)
{
	cout <<"(" <<C.Real << ", " << C.Imaginary<<")";
}