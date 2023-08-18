#include "Wheel.h"
#include <iostream>
#include <cstring>
using namespace std;

Wheel::Wheel()
{
    // default constructor always assigns default values
    cout << "Wheel default constructor called" << endl;
    this->company_ = nullptr;
    this->front = front;
}

Wheel::Wheel(const char company[], bool front)
{
    cout<<"Wheel overloaded constructor called"<<endl;
    //+1 for '\0' character
    this->company_ = new char[strlen(company) + 1];

    // notice '<=' here
    for (int i = 0; i <= strlen(company) + 1; i++)
    {
        this->company_[i] = company[i];
    }

    this->front = front;
}

Wheel::Wheel(Wheel &other)
{
    cout<<"Wheel copy constructor invoked"<<endl;
    // if object to be copied has a company
    if (other.company_)
    {
        if (this->company_)
        {
            delete[] this->company_;
        }

        // notice '+1' here
        this->company_ = new char[strlen(other.company_) + 1];

        // notice '<=' here
        for (int i = 0; i <= strlen(other.company_) + 1; i++)
        {
            this->company_[i] = other.company_[i];
        }
    }

    this->front = front;
}

void Wheel::Print()
{
    // if Wheel has make
    if (this->company_)
    {
        cout << "The Wheel is of " << this->company_ << " company";

        if (this->front)
            cout << ", its a front wheel" << endl;
        else
            cout << ", its a rear wheel" << endl;
    }
}

Wheel::~Wheel()
{
    cout<<"Wheel destructor invoked"<<endl;
    if (this->company_)
    {
        delete[] this->company_;
    }
}
