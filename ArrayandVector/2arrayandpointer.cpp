#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,7,9};
    int* ptr = arr;    // giving address
    // cout<<ptr<<endl;
    // cout<<ptr[0]<<endl;
    // for(int i=0;i<=4;i++){
    //     cout<<ptr[i]<<" "; 
    //  }
    //  cout<<endl;
    //  *ptr = 8;   // ptr[0] = 8
    //  ptr++;
    //  *ptr = 9;
    //  ptr--;
     for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
     }
}