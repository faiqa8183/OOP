#include <iostream>
#include <cstring>
using namespace std;
// TEMPLATE FUNCTION FOR INTEGERS , CHARACTERS , STRINGS , DOUBLES, AND ARRAYS 

template <class T>
int Compare(T Parameter1, T Parameter2)
{
    if (Parameter1 == Parameter2)
    {
        return 0;
    }
    if (Parameter1 < Parameter2)
    {
        return -1;
    }
    if (Parameter1 > Parameter2)
    {
        return 1;
    }
}
// TEMPLATE FUNCTION ALTHOUGH NOT MENTIONED IN MANUAL BUT IT IS CREATED SO
// THAT SUM OF ARRAY OF ANY DATATYPE CAN BE CALCULATED EASILY

template <class T> int Calculatesum(T array1[], int size)
{
    double sum = 0 ; 
    for (int i = 0 ; i < size; i++)
    {
    	sum= sum+ array1[i];
	}
	return sum;
}



int main()

{
	// ******************SINGLE INTEGERS CHARS STRINGS DOUBLES AND FLOATS************************ 
    cout << " Comparing two integers" << endl;
    cout << Compare(2, 3) << endl;

    cout << " Comparing two floats" << endl;
    cout << Compare(4.4, 6.5) << endl;

    cout << " Comparing two doubles" << endl;
    cout << Compare(5555, 888) << endl;

    cout << " Comparing two characters" << endl;
    cout << Compare('c', 'n') << endl;

    cout << " Comparing two strings" << endl;
    cout << Compare("faiqa", "malik") << endl;
    
    // ***************************ARRAY BASED***********************************

    cout << "  comparing a double array on basis of sum " << endl;

    double array1[6] = { 10.2, 50.6, 30.4, 40.6, 20.0,5.6 };
    int doublesum1 =  Calculatesum(array1,6);
    double doublearray2[5] = { 10,20,30,40,50};
    int sum2 = Calculatesum(array1,5);
    cout << Compare( doublesum1,doublesum2) << endl;

    cout << " Comparing a character array on the basis of sum" << endl;

    char characterarray1[5] = { 'f','a','i','q','a' };
    char characterarray2[5] = { 'm','a','l','i','k' };
    int charsum1 = Calculatesum(characterarray1,5);
    int charsum2 = Calculatesum(characterarray2,5);
    cout << Compare( charsum1, charsum2) << endl;
     
     cout << "Comparing a integer array on the basis of sum" << endl;
     
    int firstint[5] = {1,2,3,4,5};
    int secondint[6] = {0,0,0,1,1,1};
    int intsum1 = Calculatesum(firstint,5);
    int intsum2 = Calculatesum(secondint,6);
    cout << Compare( intsum1, intsum2) << endl;
    
}
