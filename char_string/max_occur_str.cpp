#include<iostream>
#include<string>
#include<map>
using namespace std;

void getMaxOccurStr(string s){
    map<char,int> mp;

    for(auto x: s){
        mp[x]++;
    }

    

    int maxi=-1;
    char ans;

    for(auto x:mp){
        if(x.second>maxi){
            maxi=x.second;
            ans=x.first;
           
        }
       
    }
    cout<<ans;
}


int main()
{
    string s="test";
getMaxOccurStr(s);
}