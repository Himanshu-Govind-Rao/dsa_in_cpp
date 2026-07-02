#include<iostream>
#include<string>
using namespace std;
int main(){
//    string str = "Himanshu Govind Rao";
//    cout<<str.length()<<endl;

// string str = "abcd";
// cout<<str<<endl;
// str.push_back('e');
// cout<<str<<endl;
// str.pop_back();
// cout<<str<<endl;

// string s = "abc";
// string t = "def";
// cout<<s<<endl;
// s = s+t;
// cout<<s<<endl;

string s = "abcdefg";
cout<<s<<endl;
reverse(s.begin()+2,s.begin()+6);
cout<<s<<endl;
}