#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // Base case
    cout<<n<<endl;  // Kaam
    print(n-1);  //Call
}
int main(){
    int n;
    cout<<"Enter n:- ";
    cin>>n;
    print(n);
}