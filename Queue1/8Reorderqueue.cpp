#include<iostream>
#include<deque>
#include<stack>
using namespace std;
int main(){
    deque<int>q;
    stack<int> st;
    int n = 10;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_back(4);
    q.push_back(5);
    q.push_back(6);
    q.push_back(7);
    q.push_back(8);
    q.push_back(9);
    q.push_back(10);
    for(int i=0; i<n/2; i++){
        st.push(q.front());
        q.pop_front();
    }
    while(st.size()!=0){
        q.push_back(st.top());
        st.pop();
    }
    for(int i=0; i<n/2; i++){
        st.push(q.front());
        q.pop_front();
    }
    while(st.size()!=0){
    q.push_back(st.top());
    q.push_back(q.front());
    q.pop_front();
    st.pop();
    }
    for(int i=0; i<n; i++){
        st.push(q.front());
        q.pop_front();
    }
    while(st.size()!=0){
        q.push_back(st.top());
        st.pop();
    }
    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        q.pop_front();
    }
}