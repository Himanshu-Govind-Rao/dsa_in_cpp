#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {23,34,55,65,76,44,98,67,96};
    int brr[3][3] = {32,14,85,25,67,41,8,17,46};
    int crr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           crr[i][j] = arr[i][j] + brr[i][j];
              cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}