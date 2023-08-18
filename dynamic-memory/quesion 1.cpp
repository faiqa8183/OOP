#include <iostream>
using namespace std;
int main()
{
	int size  = 5;
	int *arr = new int [size];
	cout << " enter elements :" << endl;
	for (int i = 0 ; i< size ;i++)
	{
		cin >> arr[i];
	}
	cout << " the values are " << endl;
	for (int i = 0 ; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;
	// now pointer is behaving as dangling pointer;
	// if you try to cout it ,it will generate some garbage value;
	for (int i = 0 ; i < size; i++)
	{
		cout << arr[i];
	}
		cout << "this is some garbage value";
}
