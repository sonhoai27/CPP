#include <iostream>

using namespace std;

const int Max = 10;

//baitap 1, dao nguoc mot so nguyen
int daoNguoc(int n){
	int s= 0;
	while(n){
		s = s*10 + n%10;
		n = n/10;
	}
	
	return s;
}
//tach mot so nguyen ra cac so le vi du nhu 1, 2, 3.

void tachSo(int n){
	n = daoNguoc(n);
	int s;
	while(n > 0){
		s = n % 10;
		cout<<s<<" ";
		n = n / 10;
	}
}

//kiem tra day so co doi xung ko
void Nhap_Mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<"\nNhap vao phan tu thu "<<i<<": ";
		cin>>a[i];
	}
}
void Xuat_Mang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
}

//kiem ta doi xung  yheo kieu mang
bool kiemTraDOiXung(int a[], int n){
	int k = n - 1;
	for(int i = 0; i < n; i++){
		if(a[i] == a[k]){
			k = k - 1;
		}else{
			return 0;
			break;
		}
	}
	return 1;
}

//kiem tra so doi xung theo kieu so nguyen duong n
void InputArray(int *A, int n){
	for(int i = 0; i < n; i++){
		cout<<"\nNhap vao phan tu thu "<<i<<": ";
		cin>>A[i];
	}
}

void OutArray(int *A, int n){
	for(int i = 0; i < n; i++){
		cout<<A[i];
	}
}


bool doixungSoNguyen(int n){
	if(n == daoNguoc(n)) return true;
	else return false;
}

//them phan tu vao mang;
bool themPhanTu(int *a, int Max, int &n){
	while(true){
		for(int i = n; i <= Max; i++){
			if(n <= Max){
				cin>>a[i];
				n++;
			}else{
				return false;
			}	
		}
	}
}
int main(){
	int a[Max];
	int soLuongPhanTuMang;
	
	
	int n;
	cout<<"\nNhap Vao So Luong Ban Muon Them: ";
	cin>>n;
	int *arr = new int[n];
	
//	int soNguyen;
//	cout<<"\nNhap vao mot so: ";
//	cin>>soNguyen;

//	cout<<"\nNhap vaoso luong phan tu mang: ";
//	cin>>soLuongPhanTuMang;
	
//	cout<<"\n\Dao nguoc so nguyen duong: "<<daoNguoc(soNguyen);
//	cout<<endl;
//	
//	cout<<"\nTach so nguyen: ";
//	tachSo(soNguyen); cout<<";";
//	cout<<"\n\t\tKIem Tra Day So Co Doi Xung Khong Theo Kieu Mang";
//	cout<<"\nNhap Mang: ";
//	Nhap_Mang(a, soLuongPhanTuMang);
//	cout<<"\nXuat Mang: ";
//	Xuat_Mang(a, soLuongPhanTuMang);
//	cout<<"\n";
//	cout<<"\nKet Qua: ";
//	if(kiemTraDOiXung(a, soLuongPhanTuMang) == 1) cout<<"Co";
//	else cout<<"Khong";
//	cout<<"\n\nSo Nguyen: ";
//	cout<<doixungSoNguyen(soNguyen);
	cout<<"\nNhap Mang: ";
	InputArray(arr, n);
	cout<<"\nXuat Mang: ";
	OutArray(arr, n);
//	cout<<"\nThem Phan Tu Va Kiem Tra: "<<themPhanTu(arr, Max, n);
	delete[] arr;
	cout<<endl;
	system("pause");
	return 0;
}
