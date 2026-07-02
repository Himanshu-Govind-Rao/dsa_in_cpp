#include<iostream>
using namespace std;
class Scooty{     // parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootspace;
};

class bike : public Scooty{    // child class OR derived class
public:
    int gears;
};

int main(){
    bike b1;
    b1.topSpeed = 140;
    b1.mileage = 12.5;
    b1.gears = 6;
}