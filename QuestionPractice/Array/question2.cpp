#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,5,7,6,8,9};
    int largest = INT_MIN;
    int secondlargest = INT_MIN;
    for(int i=0; i<6; i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i]!= largest){
            secondlargest = arr[i];
        }
    }
    if(secondlargest == INT_MIN)
    cout<< "Second largest element does not exist";
    else
        cout<<"Second largest element = "<< secondlargest;
}