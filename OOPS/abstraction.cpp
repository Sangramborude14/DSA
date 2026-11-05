#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
    virtual void startEngine() = 0;
    virtual void shiftGear(int gear) = 0;
    virtual void accelerate() = 0;
    virtual void stopEngine() = 0;
    virtual ~Car {}
}

class SportsCar: public Car {
    public:
        string brand;
        string model;
        bool isEngineOn;
        int currentSpeed;
        int currentGear;
    
    SportsCar(string b,string m){
        this->brand = b;
        this->brand = m;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0;
    }

    void startEngine() {
        isEngineOn = true;
        cout << brand << " " << model << " : Engine starts   "<< endl;
    }

    void shiftGear(int gear){
    if(!isEngineOn) {
        cout << brand << " " << model << " : Engine is off! Cannot shift gears" << endl;
        return;
    }
    currentGear = gear;
    cout << brand << " " << model <<" : Shifted to gear" << currentGear << endl;
    }

    void accelerate() {
        if(!isEngineOn){
            cout << brand << " " << ": Engine is off! cannot acclerate"<< endl;
        return;
    }
}   
}

int main() {
    
    return 0;
}