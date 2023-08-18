#include <iostream>
using namespace std;
int main()
{
 int *p = new int;
	 *p = 23;
	 cout << p << endl;
     p  = new int;
     *p = 45;

     cout << p << endl;
     
delete p;
// OBSERVATIONS
// program will execute there will be no error
// it will allocate two memories
//  now if you will try to initialize the same pointer than error will occur;
}
