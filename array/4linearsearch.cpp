#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i;i<=n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter a number x";
    cin>>x;
    // search
    // check mark
    bool flag = false;
    for(int i;i<n;i++){
        if(arr[i]== x) flag = true;
    }
        if (flag == true) {
            cout<<"x is present in given array"<<endl;
        }
        else{
            cout<<"x is not present in given array"<<endl;
        }
}