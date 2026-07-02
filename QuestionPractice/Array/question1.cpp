#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,12,16,7,8,9,10};
    int prd = 1;
    for(int i = 0;i<9;i++){
        prd *= arr[i];
    }
    cout<<"The product of elements are:- "<<prd;
}