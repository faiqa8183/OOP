#include <iostream>
using namespace std;
int main()
{
	int size1 ; 
	cout << " enter size for the first string"  << endl;
	cin >> size1;
	char *str1 = new char[size1];
	for (int i = 0 ; i< size1 ; i++)
	{
		cin >> str1[i];
	}
	int size2 ; 
	cout << " enter size for the first string" << endl;
	cin >> size2;
	char *str2 = new char[size2];
	for (int i = 0 ; i< size2 ; i++)
	{
		cin >> str2[i];
	}
	int k = 0;
	int size3 = size1+size2;
	char *str3 = new char[size3];
	for (int i = 0 ; i<size1 ;i++)
	{
		str3[i]=str1[i];
		k++;
	}
	for (int j = 0  ; j<size2 ;j++)
	{
		str3[k]=str2[j];
		k++;
	}
	cout << "concatenation of array" << endl;
	for (int i =0 ; i< size3;i++)
	{
		cout << str3[i];
	}
	char key;
	cout << "enter the num to search " << endl;
	cin >> key;
	int flag;
	for (int i = 0 ; i < size3;i++)
	{
	if (key==str3[i])
	{
	cout << "present" ;
	break;

	}
	else 
	{
		flag = 0;
	
	}
    }
    
}
