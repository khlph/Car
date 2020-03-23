#include <string>
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car
{
private:
    string CarID, CarName, CarVer;
    int CarTime;
    double CarRent;

public:
    Car();
    Car(string id, string name, string version, int time, double rate);

    void setCarID(string id);
    void setCarName(string name);
    void setCarVer(string version);
    void setCarTime(int time);
    void setCarRent(double rate);

    string getCarID();
    string getCarName();
    string getCarVer();
    int getCarTime();
    double getCarRent();

    void IncreaseTime(int time);
    void IncreaseCost(double cost);

    friend std::ostream &operator<<(ostream &output, Car &c);
};

#endif