#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,23,45,67,100,230,45,27};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];    // at arr[0] we use INT_MIN
    for(int i = 1;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"maximum value = "<<max;
}