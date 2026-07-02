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
};
void change(cricketer* c){
    //(*c).avg = 77.2;
    c->avg = 79.5;
}

int main(){
    cricketer c1("virat kohli",25000,59.6);
    //cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;
    //cricketer c2("rohit sharma",18000,58.4);

    cricketer* p1 = &c1;
    cout<<p1->runs<<endl;   // c1.runs
    cout<<c1.avg<<endl;
    p1->avg = 77.5;  // c1.avg = 77.5
    cout<<c1.avg<<endl;
}
 