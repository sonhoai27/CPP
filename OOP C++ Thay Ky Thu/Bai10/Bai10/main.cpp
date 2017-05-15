#include <iostream>
using namespace std;

class ARRAY {
private:
    float *a;
    int n;
public:
    ARRAY(int N = 2);
    ~ARRAY();
    int GET(float *&V);
    void Nhap();
};

class MERGE {
private:
    ARRAY *a, *b;
public:
    MERGE(float n1, float n2){
    	a = new ARRAY(n1);
    	b = new ARRAY(n2);
	}
    float Tong();
    int GETS(ARRAY *&V){
    	V = a;
	}
};

ARRAY::ARRAY(int N) {
    n = N;
    a = new float[n];
    
}

ARRAY::~ARRAY() {
    delete[] a;
}
int ARRAY::GET(float *&V) {
    *&V = *&a;
    return n;
}
void ARRAY::Nhap() {
    for (int i = 0; i < n; i++) {
        cout << "\nNhap vao phan tu thu " << i << ": ";
        cin >> *(a+i);
    }
}

float MERGE::Tong()
{
	float sum;
	
	return sum;
}
int main() {
    ARRAY mang(4);
    mang.Nhap();
    float *pt;
    int sopt = mang.GET(pt);
    cout << "\n\tIn Mang Da Nhap: ";
    for (int i = 0; i < sopt; i++) {
        cout << pt[i] << " ";
    }
    cout << "\n\n";
    
    MERGE a(3, 4);
    
    ARRAY *a1;
    int spta1 = a.GETS(a1);
    
    
    system("pause");
    return 0;
}
 

