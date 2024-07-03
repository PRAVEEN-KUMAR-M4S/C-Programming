#include<iostream>
#include<string>
#include<stack>
using namespace std;

void removeAdj(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        
        if(st.empty()){
            st.push(s[i]);
        }else{
            if(st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }
    string ans="";
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}

int main()
{

    string s="aaxz";

    removeAdj(s);

}