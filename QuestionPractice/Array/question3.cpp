#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {11,23,43,23,12,54,67,43,64,7,43,76,57};
    int min = INT_MAX;
    for(int i; i<13 ; i++){
        if(arr[i] < min)
        min = arr[i];
    }
    cout<<"the minimum value in array is :- "<<min;
}