#include<iostream>
using namespace std;
int totalways(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return totalways(n-1)+totalways(n-2)+totalways(n-3);
}
int main(){
    int n;
    cout<<"Enter n:- ";
    cin>>n;
    cout<<totalways(n);
}