#include <iostream>
using namespace std;
int** allocatememory(int** matrix,int rows,int cols)
{
	matrix = new int*[rows];
	for (int i = 0 ; i < rows ; i++)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}
void initialize(int** matrix,int rows,int cols)
{
	int count =0;
	for (int i = 0  ;i < rows ; i++)
	{
		for (int j = 0 ; j< cols ;j++)
		{
			matrix[i][j] = count++;
		}
	}
}
void printarray(int**& matrix,int rows ,int cols)
{
	for (int i = 0  ;i < rows ; i++)
	{
		for (int j = 0 ; j < cols ;j++)
		{
			cout <<  matrix[i][j];
		}
		cout << endl;
	}	
}
void deallocate(int**& matrix,int rows,int cols)
{
for (int i = 0 ; i < rows ; i++)
 {
	delete[]matrix[i];
	}
	delete [] matrix;;	
}
int main()
{
int** matrix=0;
int rows;
cout << " enter rows" << endl;
cin >> rows;
int  cols;	
cout <<  "enter cols  " << endl;
cin >> cols;
allocatememory(matrix,rows,cols);
cout <<  "enter values :" << endl;
initialize(matrix,rows,cols);
cout << " the entered matrix is " << endl;
printarray(matrix,rows,cols);
deallocate(matrix,rows,cols);
}
