#include<iostream>
#include <vector>
using namespace std;
int binary(int n){
    vector<int>v;
    if(n==0) return 0;
    return binary(n/2)*10 + n%2;
}
int main(){
    int n = 500;
    cout<<binary(n);
}