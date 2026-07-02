#include<iostream>
using namespace std;
class Scooty{
public:
    int topSpeed;
    float mileage;
    virtual void sound(){
        cout<<"vroom vroom"<<endl;
    }
private:
    int bootSpace;
};
class Bike : public Scooty{
public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};

int main(){
    Scooty* b = new Bike();  // object Pointer
    b -> sound();
}