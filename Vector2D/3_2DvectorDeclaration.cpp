#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v1(4,2);
    //int arr[3][4];
    vector< vector<int> > v(3, vector<int> (4,2));
    
    // No of Rows
    cout<<v.size()<<endl;

    // No of columns
    cout<<v[0].size();
}