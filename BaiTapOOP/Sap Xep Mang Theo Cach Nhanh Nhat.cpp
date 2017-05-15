#include <iostream>

using namespace std;

int main(){
	
	int n = 4;
	int arr[4] = {4, 3, 6, 2};
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp;
				temp =  arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++ ){
		cout<<arr[i]<<" ";
	}
	system("pause");
	return 0;
}
