#include<iostream>
using namespace std;
int main(){
    int  marks[] = {34,56,78,32,56,90,95,43,23};
    for(int i=0;i<9;i++){
        if(marks[i]<35){
            cout<<i<<"\n";
        }
    }
}