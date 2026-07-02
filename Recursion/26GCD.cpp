// #include<iostream>
// using namespace std;
// int hcf(int a, int b){
//     for(int i=min(a,b); i>=2; i--){
//         if(a%i==0 && b%i==0) return i;
//     }
//     return 1;     // ---> O(min{a,b}).
// }
// int main(){
//     int a = 24;
//     int b = 60;
//     cout<<hcf(a,b);
// }

// Using Recursion ---> Euclid's Division Algorithm
#include<iostream>
using namespace std;
int gcd(int a, int b){
   int x = min(a,b);
   int y = max(a,b);
   int n = y%x;
   if(n==0) return x;
   return gcd(x,n);
}
int main(){
    int a = 31;
    int b = 60;
    cout<<gcd(a,b);
}
// **Time complexity of GCD(a,b) is O(log(a+b))