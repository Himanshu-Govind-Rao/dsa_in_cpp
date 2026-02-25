#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
getline(cin,s);
int n = s.length();
cout<<s<<endl;
reverse(s.begin(),s.begin()+n/2);
cout<<s<<endl;
}
