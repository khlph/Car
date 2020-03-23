#include "Car.h"
#include <ostream>
#include <string>
using namespace std;

// Car constructor
Car::Car()
{
    string id = "CarID-0001";
    string name = "Car01";
    string version = "Ver 0.0.0";
    int time = 1;
    double rate = 15;
    setCarID(id);
    setCarName(name);
    setCarVer(version);
    setCarTime(time);
    setCarRent(rate);
}

Car::Car(string id, string name, string version, int time, double rate)
{
    setCarID(id);
    setCarName(name);
    setCarVer(version);
    setCarTime(time);
    setCarRent(rate);
}

void Car::setCarID(string id)
{
    CarID = id;
}

void Car::setCarName(string name)
{
    CarName = name;
}

void Car::setCarVer(string version)
{
    CarVer = version;
}

void Car::setCarTime(int time)
{
    CarTime = time;
}

void Car::setCarRent(double rate)
{
    CarRent = rate;
}

string Car::getCarID()
{
    return CarID;
}

string Car::getCarName()
{
    return CarRent;
}

string Car::getCarVer()
{
    return CarVer;
}

int Car::getCarTime()
{
    return CarTime;
}

double Car::getCarRent()
{
    return CarRent;
}

void Car::IncreaseTime(int time)
{
    int t;
    t = time + getCarTime();
    if (t > 8)
    {
        setCarTime(8);
    }
    else
    {
        setCarTime(t);
    }
}

void Car::IncreaseCost(double rate)
{
    double r;
    r = rate + getCarRent();
    if (r > 3000)
    {
        setCarRent(3000);
    }
    else
    {
        setCarRent(r);
    }
}

ostream &operator<<(ostream &output, Car &c)
{
    output << c.getCarID() << "-<" << c.getCarName() << ", " << c.getCarVer() << "> x " << c.getCarTime() << " hour ("
           << c.getCarRent() << " bath/hour)" << endl;
    return output;
}