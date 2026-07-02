#include<iostream> 
using namespace std;
class Student{ // Student is a new data type
public:
    string name;
    int rno; 
    float gpa;
};

void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}

int main(){
    Student s1;
    s1.name = "Himanshu";
    s1.rno = 28;
    s1.gpa = 8;

    Student s2;
    s2.name = "Raghav";
    s2.rno = 32;
    s2.gpa = 6.2;

    print(s1);
    print(s2);
}