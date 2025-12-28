#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max = INT_MIN;
    int arr[] = {12,34,63,67,98,75,43,45,87,90,43};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=n;i++){
        if(max<arr[i])  max=arr[i] ;
    }

    int smax = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i] !=max && smax<arr[i] ) smax = arr[i];
    }
    cout<<"The second largest element is :- "<<smax;
}