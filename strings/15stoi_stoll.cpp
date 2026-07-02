#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str);
    cout<<x+1<<endl;

    //stoll..
    string ptr = "12345678934";
    long long y = stoll(ptr);
    cout<<y;
}

