#pragma once

const int MaxRow = 100;
const int MaxCol = 100;

class Matrix
{
private:
	int col, row;
	int **M;
public:
	//phuong thuc khoi tao
	Matrix(int row = 1, int col = 1);
	~Matrix();

	//phuong thuc
	void InGiaTri(int i, int j); //in ra gia tri tại vị trí nào đó với cột và hàng
	void getMatrix();
	void putMatrix();

	//nap chong toan tu
	Matrix operator+ (Matrix &m);
	Matrix operator- (Matrix &m);
	Matrix operator* (Matrix &m);
	Matrix& operator= (Matrix &m);
	Matrix& Matrix::operator= (float B);
};

