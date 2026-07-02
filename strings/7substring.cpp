// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// string s = "abcdef";
// //s.substr(idx,length)
// cout<<s.substr(2,2);
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
string s = "abcdef";
int n = s.length();
cout<<s.substr(n/2);
}
