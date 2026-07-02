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

int main(){
    // cricketer c1("virat kohli",25000,59.6);
    cricketer* c2 = new cricketer("Rohit Sharma", 18000, 47.8);
    cout<<c2->name<<" "<<c2->runs<<endl;
    
    int* ptr = new int(5245);
    cout<<*ptr<<endl;
}
 