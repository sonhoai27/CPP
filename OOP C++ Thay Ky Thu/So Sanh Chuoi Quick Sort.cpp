#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void Sort(string A[11], int q, int r) {
	string temp;
	int i = q;
	int j = r;
	string x = A[ (q + r) / 2];
	
	do{
		while(A[i] < x) i++;
		while(A[j] > x) j--;
		if(i <= j) {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++; j--;
		}
	}while(i <= j);
	if(q<j) Sort(A, q, j);
	if(i>r) Sort(A, i, r);
}

void Quick_Sort(string A[11], int n){
	Sort(A,0, n-1);
}

int main(){
	string A[11] = {"0", "A", "M0007", "M007", "M14DCPF", "M14DCKP", "M027F", "M14DCP", "N14DCP", "N1400", "K"};
	Quick_Sort(A, 11);
	for(int i = 0; i < 11; i++){
		cout<<A[i]<<" ";
	}
	system("pause");
	return 0;
}
