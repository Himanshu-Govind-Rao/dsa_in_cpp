#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void reversePart(int i,int j,vector<int> &a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(5);
    display(v);
    cout<<endl;

    int k = 20;
    int n = v.size(); 
    if(k>n) k = k % n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}