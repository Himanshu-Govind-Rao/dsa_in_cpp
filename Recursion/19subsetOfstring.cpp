//        1st method...
// #include<iostream>
// #include<string>
// using namespace std;
// void printSubset(string ans, string original){
//     if(original == ""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1));
//     printSubset(ans,original.substr(1));

// }
// int main(){
//     string str = "abc";
//     printSubset("",str);
// }

//   2nd part....
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original,int idx,vector<string>&v){
    if(idx == original.size()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    storeSubset(ans+ch,original,idx+1,v);
    storeSubset(ans,original,idx+1,v);

}
int main(){
    string str = "abc";
    vector<string>v;
    storeSubset("",str,0,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
}
