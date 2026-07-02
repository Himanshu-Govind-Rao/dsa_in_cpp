#include<iostream> 
using namespace std;
class Student{ // Student is a new data type
public:
    string name;
    int rno; 
    float gpa;

    // Constructor
Student(){   //Default Constructor

}

Student(string s, int r, float g){  //Parameterised Constructor
    name = s;
    rno = r;
    gpa = g;
    }
};

int main(){
    Student s1("Himanshu", 28, 8);
    // s1.name = "Himanshu";
    // s1.rno = 28;
    // s1.gpa = 8;

    Student s2;
    s2.name = "Raghav";
    s2.rno = 18;
    s2.gpa = 7;

    Student s3 = s1;
    s3.gpa = 9.6;  // DEEP COPY
    
    Student s7 = (s1); // copy constructor - deep copy.
    cout<<s7.name;
}