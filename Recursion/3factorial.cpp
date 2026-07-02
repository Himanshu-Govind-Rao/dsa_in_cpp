#include<iostream>
using namespace std;
int factorial(int n){
    // Base case
    if(n==0) return 1;
    // Recursive Call
    return  n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    cout<<factorial(n);
}