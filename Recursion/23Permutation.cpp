#include<iostream>
#include<string>
using namespace std;
void permutation(string ans, string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<original.length();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutation(ans+ch,left+right);
    }
}
int main(){
    string s = "abc";
    permutation("",s);
    //cout<<s.substr(1,2);   --> (a,b) a is starting idx--[inclusive] & b is length to which we have to print.
}