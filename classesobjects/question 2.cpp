#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int***matrixini(const int x, const int y, const int z)
{
	int***arr = new int**[x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = new int*[y];
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = new int[z];
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				arr[i][j][k] = 1 + rand() % 9;
			}
		}
	}
	return arr;
}
int sum(int*** arr, const int x, const int y, const int z, int sum)
{
	sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				sum += arr[i][j][k];
			}
		}
	}
	return sum;

}
void print(int*** arr, const int x, const int y, const int z)
{
	//print array
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				cout << arr[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl
			<< endl;
	}
}
void matrixdest(int*** arr, const int x, const int y, const int z)
{

	cout << "dest";
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			delete[] arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
}

int main()
{
	int*** arr = nullptr;
	const int x = 10;
	const int y = 15;
	const int z = 10;
	arr = matrixini(x, y, z);
	int tot = 0;
	tot = sum(arr, x, y, z, tot);
	cout << "the total of the matrix is: " << tot << endl;
	print(arr, x, y, z);
	matrixdest(arr, x, y, z);
}

