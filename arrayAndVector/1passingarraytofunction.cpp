#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0; i<5; i++) cout<<a[i]<<" ";
    cout<<endl;
    return;
}
void change(int b[]){
    b[0] = 100;
}
int main(){
    int arr[5] = {1,2,4,5,7};
    // accessing the elements of array in another function 
    // updation , pass by value / reference ?
    display(arr);
    change(arr);
    display(arr);
}
