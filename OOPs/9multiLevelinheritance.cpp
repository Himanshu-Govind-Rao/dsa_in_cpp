#include<iostream>
using namespace std;
class vehicle{     // parent class
public:
    int topSpeed;
    float mileage;
    string fuel;
};

class twoWheeler : public vehicle{
    bool comfort;
};

class bike : public twoWheeler{
    string color;
};

int main(){

}