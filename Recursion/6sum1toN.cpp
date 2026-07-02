// // Parameterized...
// #include<iostream>
// using namespace std;
// void sum1toN(int sum,int n){
//     if(n == 0){
//         cout<<sum<<endl;
//         return;
//     }
//     sum1toN(sum+n,n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n:- ";
//     cin>>n;
//     sum1toN(0,n);
// }

// Return type...
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    cout<<sum(n);
}