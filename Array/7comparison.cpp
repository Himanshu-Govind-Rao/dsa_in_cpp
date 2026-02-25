#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,7,8,23,12,45,66,32,65,34,76,85};
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int count = 0;
    for(int i = 0; i <= 13; i++){
        if(arr[i]>x) 
        count++;
    }
    cout<<"number of elements are greater than "<<x<<" are:- " <<count;
}