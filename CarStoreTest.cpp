#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

void main()
{
    Car Car1("CarID-002", "Toyota", "Altis 2019", 3, 2500.0);
    cout << Car1 << endl;
    Car1.IncreaseTime(6);
    cout << Car1 << endl;
    Car1.IncreaseCost(900);
    cout << Car1 << endl;
}