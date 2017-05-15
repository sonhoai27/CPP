#include <iostream>

using namespace std;

//dinh nghia con tro kieu node de tro den 1 node trong danh sach lien ket don nao do

class node{
public:
	int info;
	node *next;
};
typedef node * ptr;

class ds{
	node * contro; //contro bang first
	public:
		//khoi tao danh sach
		ds(){
			contro = NULL;
		}
		int getempty(){
			if(contro == NULL) return 1;
			return 0;
		}
		//cap phat vung nho
		ptr newnode(){
			ptr p = new node;
			return p; //tra ve dia chi
		}
		
		void them_dau(int x);
		void xuat(){
			ptr p = contro;
			if(p == NULL){
				cout<<"\nKo co phan tu nao.";
			}
			while(p != NULL){
				cout<<p->info<<" ";
				p = p->next;
				//thuc hien toi khi nao gap gia tri null
			}
		}
		
		~ds(){
			if(contro != NULL){
				delete contro;
			}
		}
		void them_sau(int so, int x){
			//tim dia chi cua p tai gia tri so_
			ptr p = lay_p(so);
			ptr q; //q la cai chen vao sau p;
			if(p == NULL){
				cout<<"\nko them dc";
			}else{
				q = newnode();
				q->info = x; //gan cho dia chi q co gia tri x
				q->next = p->next; //gan cai p->next cho q->next
				p->next = q; //sau cung thi gan cai q = cái p->next
				
			}
		}
		
		//lay dia chi cua p tai gia tri nao do
		ptr lay_p(int so){
			if(contro == NULL){
				return NULL;
			}
			
			//search info
			ptr p = contro;
			for(p; p != NULL; p = p->next) {
				if(p->info == so) return p; //tra ve dia chi cua p
			}
		}
		
		void Insert_Last (int so) {
			ptr p = newnode();
			p->next = NULL; //danh sach chua co gi nen phai tro p->next = null, vi tri cuoi.
			if (contro == NULL){
				contro = p; //neu first mà bang null thi gan p vao;
				p->info = so;
			} 
			else
			  { 
			  	ptr last ;
			    for (last = contro; last->next != NULL; last = last->next) ; 
			    last->next = p;
			    p->info = so;
			  }
 		}
 	
	 //xoa phan tu dau trong danh sach	
 	int xoa_d(){
 		ptr p;
 		if(contro == NULL) return 0; //khong xoa dc
 		p = contro; //gan p bang vi tri dau tien
 		contro = p->next;
 		delete p;
 		return 1; //xoa dc
	 }
	 
	 int xoa_sau_node(ptr p){
	 	ptr q;
//	 	ptr p = lay_p(sodt);
	 	if(p == NULL || (p->next == NULL)){
	 		return 0; //khong the xoa dc
		 }else{
		 	q = p->next;
		 	p->next = q->next;
		 	delete q;
		 	return 1; //la xoa dc
		 }
	 }
	 
	 int xoa_ngay_node(ptr p){
		ptr q; //lay dia chi p;
	 	if(p == NULL) return 0;
	 	if(p == contro){
	 		xoa_d(); //xoa ngay tai contro (first)
		 }
		 else{
		 	q = contro; //q bang first
		 	while( q->next != p){
		 		q = q->next;
			 }
			 xoa_sau_node(q);
		 }
		 return 1;
	 }
	 
	 int xoa_tc_node_trung(int x){
	 	//tai sao hai truyen vao x, vi neu truyen vao ptr q, thi khi do se chi xoa o dia chi con tro xac dinh nao do thoi.
	 	if(contro == NULL)
		  {
	 		return 0;
		 }
		 
		 ptr p = contro;
		 while(p->next != NULL) {
		 	if(p->next->info == x)
			 {
		 		xoa_sau_node(p);
			 }
			 else
			 {
			 	p = p->next;
			 }
			 if(p == NULL)
			 {
			 	break;
			 }
		 }
		 
		 if(contro->info == x)
		 {
		 	xoa_d();
		 	return 1;
		 }
	 }
	 
	 ptr getP(){
	 	return contro;
	 }
	 
	 int daonguoc(){
	 	ptr p = contro; //gan p = first
	 	ptr q = contro->next; 
	 	contro = q->next;
	 	p->next = NULL;
	 	q->next = p;
	 	
	 }

};

void ds::them_dau(int x){
	ptr p = newnode();
	p->next = contro;
	p->info = x;
	contro = p;
}

 void ghephai_node(){
 	ds ds_1, ds_2;
 	for(int i = 0; i < 10; i++){
		ds_1.them_dau(i);
	}
	for(int i = 10; i < 20; i++){
		ds_2.them_dau(i);
	}
	ds_1.xuat();
	cout<<"\n";
	ds_2.xuat();
	//tuy chinh == vs != de them danh sach, kt ds_1 co rong hay ko
	if(ds_1.getempty() != 1){
		cout<<"\nKo co rong\n";
		ptr k = ds_2.getP();
		ptr z = ds_1.getP();
		while(k->next != NULL){
			ds_1.Insert_Last(k->info);
			k = k->next;
		}
	}
//	else{
//		ptr p = ds_1.getP();
//		while( p != NULL){
//			p = p->next;
//		}
//		p->next = ds_2.getP();
//	}

	ds_1.xuat();
 }

int main(){
	
//	ghephai_node();
//	int soThem;
	ds ds_;
	for(int i = 0; i < 10; i++){
		ds_.them_dau(i);
	}
	ds_.them_sau(0, 11);
	ds_.xuat();
//	cout<<"\nXuat Phan Tu: ";
//	ds_.xuat();
//	/*
//	cout<<"\nThem 3 vao sau lien ket don: ";
//	ds_.them_sau(5,3);
//	ds_.xuat();
//	*/
//	cout<<"\nThem phan tu theo kieu insert last: ";
//	for(int i = 0; i < 20; i++) {
//		if(i % 2 == 0){
//			ds_.Insert_Last(2); //random so
//		}else{
//			ds_.Insert_Last(i); //random so
//		}
//		
//	}
//	ds_.xuat();
//	cout<<"\nXoa phan tu dau: ";
////	cout<<ds_.xoa_d()<<endl;
////	ds_.xuat();
//	cout<<"\nXoa phan tu dung sau: ";
//	cout<<ds_.xoa_sau_node(ds_.lay_p(3))<<endl;
//	ds_.xuat();
//	cout<<"\n";
//	cout<<"\nXoa ngay tai so 0:";
//	cout<<ds_.xoa_ngay_node(ds_.lay_p(5))<<endl;
//	ds_.xuat();
//	cout<<"\n";
//	cout<<"\nXoa het so x:";
//	cout<<ds_.xoa_tc_node_trung(2)<<endl;
//	ds_.xuat();
//	cout<<"\n";
	system("pause");
	return 0;
}
