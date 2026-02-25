#include<iostream>
using namespace std;
bool poweroftwo(int n){
    if(n%2!=0) return false;
    if(n%2==0){
        poweroftwo(n/2); 
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter n:- ";
    cin>>n;
    if(poweroftwo(n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
