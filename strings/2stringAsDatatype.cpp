#include<iostream>
#include<string>
using namespace std;
int main(){
   // string str = "raghav garg is at PW office";
   // cout<<str;
   string s;
   // cin>>s;  --> only if the given string has no spaces
   getline(cin,s);
   cout<<s;
}