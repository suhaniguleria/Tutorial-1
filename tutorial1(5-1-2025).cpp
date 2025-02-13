#include <iostream>
using namespace std;

class Vehicle 
{
    public:
      int speed;
      float fuelLevel;

    Vehicle(int spd, float fuel) : speed(spd), fuelLevel(fuel) {}

    void displayStatus() 
	const 
	{
        cout<<"Speed:"<< speed <<" km/h, Fuel Level: "<< fuelLevel<<" liters\n";
    }
};

int main() 
{
    Vehicle car(0, 50.0f);  
    int Vehicle::*ptrSpeed = &Vehicle::speed;

    void (Vehicle::*ptrDisplay)() const = &Vehicle::displayStatus;

    car.*ptrSpeed = 80;
    (car.*ptrDisplay)();

    return 0;
}

