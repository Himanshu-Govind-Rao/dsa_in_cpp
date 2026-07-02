// // Using Extra Parameter...
// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i>n) return; // Base case
//     cout<<i<<endl;  // Kaam
//     print(i+1,n);  //Call
// }
// int main(){
//     int n;  
//     cout<<"Enter n:- ";
//     cin>>n;
//     print(1,n);
// }


// Without using extra parameter...
#include<iostream>
using namespace std;
void print(int n){
    if(n == 0 ) return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n:- ";
    cin>>n;
    print(n);
}