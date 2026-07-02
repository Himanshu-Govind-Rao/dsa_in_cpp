#include<iostream>
using namespace std;
class cricketer{
public:
    int runs;
    int wicket;
    int average;
};

class Engineer{
public:
    int experience;
    string domain;
};

class Phodu : public Engineer, cricketer{ // multiple inheritance
public: 
    string name;
};

int main(){

}