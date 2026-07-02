#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    //cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // while(st.size()>0){   // --> Emptying the stack
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    // we will use extra stack
    while(st.size()>0){   
    cout<<st.top()<<endl;
    int x = st.top();
    st.pop();
    temp.push(x);
    }

    // putting element back from temp to set
    while(temp.size()>0){
        int x = temp.top();
        temp.pop();
        st.push(x);
    }
}