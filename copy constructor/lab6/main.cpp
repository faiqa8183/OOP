#include <iostream>
#include "Car.h"
#include "Wheel.h"
using namespace std;

// try removing this & here what does it do?
void Print(Car &car, Wheel wheels[])
{
    car.Print();
    for (int i = 0; i < 4; i++)
    {
        wheels[i].Print();
    }
    cout << endl
         << endl;
}

int main()
{
    // make 4 Wheels
    Wheel frontLeft("Aeolus", true);
    Wheel frontRight("Aeolus", true);
    Wheel backLeft("Apollo", false);
    Wheel backRight("Apollo", false);

    // default constructor(Wheel) called 4 times here?
    // copy constructor of wheel called 4 times here?
    Wheel wheels[4] = {frontLeft, frontRight, backLeft, backRight};       

    Car ford("ford", 1);

    Print(ford, wheels);

    Car mustang = ford; // copy constructor called here?

    mustang.SetMake("mustang");

    Print(mustang, wheels);

    Car ferrari = ford;

    ferrari.SetMake("ferrari");

    Print(ferrari, wheels);

    return 0;
}