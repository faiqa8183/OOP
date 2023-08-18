#include "Car.h"
#include <iostream>
#include <cstring>
using namespace std;
Car::Car()
{
    cout << "Car default constructor invoked" << endl;
    this->make_ = nullptr;
    this->id_ = -1;
}

Car::Car(const char make[], int id)
{
    cout<<"Car overloaded constructor overloaded"<<endl;
    // notice '+1' here
    this->make_ = new char[strlen(make) + 1];

    // notice '<=' here
    for (int i = 0; i <= strlen(make); i++)
    {
        this->make_[i] = make[i];
    }

    this->id_ = id;
}

void Car::SetMake(const char make[])
{
    // if make already has memory
    if (this->make_)
    {
        delete[] this->make_;
    }
    // notice '+1' here
    this->make_ = new char[strlen(make) + 1];

    // notice '<=' here
    for (int i = 0; i <= strlen(make); i++)
    {
        this->make_[i] = make[i];
    }
}

Car::Car(Car &other)
{
    cout<<"Car copy constructor invoked"<<endl;
    // if object to be copied has make
    if (other.make_)
    {
        // if make already has memory
        if (this->make_)
        {
            delete[] this->make_;
        }

        // notice '+1' here
        this->make_ = new char[strlen(other.make_) + 1];

        // notice '<=' here
        for (int i = 0; i <= strlen(other.make_); i++)
        {
            this->make_[i] = other.make_[i];
        }
    }

    this->id_ = other.id_;
}

void Car::Print()
{
    if (this->make_)
    {
        cout << "The Car is a " << this->make_ << " and its id is " << this->id_ << endl;
    }
}

Car::~Car()
{
    cout<<"Car destructor invoked"<<endl;
    if (this->make_)
    {
        delete[] this->make_;
    }
}