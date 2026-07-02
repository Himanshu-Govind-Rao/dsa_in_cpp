#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
    void print(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }
};

int main(){
    cricketer c1("virat kohli",25000,59.6);
    cricketer c2("rohit shrama",18000,58.4);
    
    c1.print();
    c2.print();
}
 