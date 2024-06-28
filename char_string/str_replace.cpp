#include<iostream>
#include<string>
using namespace std;

string replaceStr(string s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            temp.push_back('@')
        }else{
            temp.push_back(s[i]);
        }
    }

}


int main()
{
    string s="My name is";

}