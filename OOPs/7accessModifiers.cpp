#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    Student(){

    }

    Student(int r, string n, float m){
        rno = r;
        name = n;
        marks = m;
    }
    float getMarks(){  // getter 
        return marks;
    }
    void setMark(float m){  // setter
        marks = m;
    }
private:
    float marks;
};
    
int main(){
    Student s1(28,"Himanshu",92.4);
    cout<<s1.getMarks()<<endl;
    s1.setMark(98.4);
}