#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[3][3] = {23,34,55,65,76,44,98,67,96};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
    }
        cout<<sum;
    }