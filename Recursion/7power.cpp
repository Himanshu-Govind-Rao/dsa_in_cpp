#include<iostream>
using namespace std;
int power(int a, int b){
    if(a==0 && b==0) return -100;
    if(a == 0) return 0;
    if(b == 0) return 1;
    return a*power(a,b-1);
}
int main(){
    int n,m;
    cout<<"Enter base :- ";
    cin>>n;
    cout<<"Enter exponent:- ";
    cin>>m;
    cout<<power(n,m);
}