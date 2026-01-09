#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {23,34,55,65,76,44};
     for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
              cout<<arr[i][j]<<" ";
        }
     cout<<endl;
        }
        cout<<endl;

        // print the transpose..
    // for(int j=0; j<3; j++){
    //     for(int i=0; i<2; i++){
    //           cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // store the transpose..
    int t[3][2];
    for(int i=0; i<3; i++){
        for(int j=0; i<2; j++){
            t[i][j] = arr[j][i];
        }
    }
    // print the transpose
    for(int i=0; i<3; i++){
        for(int j=0; i<2; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}