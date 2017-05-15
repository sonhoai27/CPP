#include <iostream>
#include <time.h> 
#include <stdlib.h> 
#include <windows.h>
#include <math.h>
using namespace std;

clock_t demthoigian(clock_t t, clock_t e){
	return ((e - t)/ CLOCKS_PER_SEC);
}

void taomang(int A[], int n){
	srand (time(NULL));
	int a, k = 0;
  do{
  	a = rand() % n + 1;
  	A[k] = a;
  	k++;
  }while(k < n);
}

void Bubble_Sort(int A[], int n){
	int i, j, temp;
	for(i = 1; i< n; i++){
		
	}
}

int main(){
	int array[1000];
	clock_t t, e;
	t = clock();
	taomang(array, 1000);
	cout<<"\nXuat: ";
	for(int i = 0; i < 1000; i++){
	  	cout<<array[i]<<" ";
	  }
	e = clock();
	cout<<"\nE: "<<e;
	cout<<"\nThoi gian: "<<(float)demthoigian(t, e)<<" t"<<endl;
	system("pause");
	return 0;
}
