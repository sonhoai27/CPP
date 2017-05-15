#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int r, int c){
	M = new int *[r] ;//khoi tao vung nho cho hang
	for(int i = 0; i < r; i++){
		M[i] = new int[c]; //khoi tao vung nho cho tung cott trong ma tran  
	}

	//gán giá trị mặc định cho ma tran
	row = r; col = c;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			M[i][j] = 0;
		}
	}
}

Matrix::~Matrix(){
	for(int i = 0; i < row; i++){
		delete[]  M[i];
	}
	delete[] M;
	cout<<"\nVung nho da duoc thu hoi";
}

void Matrix::getMatrix(){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"\nNhap vao vi tri "<<i<<", "<<j<<": ";
			cin>>M[i][j];
		}
	}
}

void Matrix::putMatrix(){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
}

Matrix Matrix::operator+ (Matrix &m){
	if(row!= m.row || col!=m.col){
			cout<<"\nERROR";
			return 0;
	}else{
		Matrix n(row, col);
			for(int i = 0; i < row; i++){
				for(int j = 0; j< col; j++){
					n.M[i][j] = M[i][j] + m.M[i][j];
			}
		}
			return n;
	}

}

Matrix Matrix::operator* (Matrix &m){
	if(col!= m.row){
		cout<<"\nERROR";
		return 0;
	}
	Matrix n(row, col);
	for(int i = 0; i < row; i++){
		for(int j = 0; j < m.col; j++){
			n.M[i][j] = 0;
			for(int z = 0; z < col; z++){
				n.M[i][j] += M[i][z]*M[z][j];
			}
		}
	}

	return n;
}


Matrix Matrix::operator- (Matrix &m){
	if(row!= m.row || col!=m.col){
			cout<<"\nERROR";
			return 0;
	}else{
		Matrix n(row, col);
			for(int i = 0; i < row; i++){
				for(int j = 0; j< col; j++){
					n.M[i][j] = M[i][j] - m.M[i][j];
			}
		}
			return n;
	}

}

Matrix& Matrix::operator= (Matrix &m){
	for(int i = 0; i < row; i++){
		delete[] M[i];
	}

	row = m.row; col = m.col;

	M = new int *[row];
	for(int i = 0; i < row; i++){
		M[i] = new int [col];
	}
	for(int i = 0; i <row; i++){
		for(int j = 0; j < col; j++){
			M[i][j] = m.M[i][j];
		}
	}
}

Matrix& Matrix::operator= (float B){
	
	for(int i = 0; i <row; i++){
		for(int j = 0; j < col; j++){
			M[i][j] = B;
		}
	}
}
