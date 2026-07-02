#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max = INT_MIN;
    int arr[3][3] = {23,34,55,65,76,44,98,67,96};
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] > max)  max = arr[i][j];
        }
    }
        cout<<max;
    }