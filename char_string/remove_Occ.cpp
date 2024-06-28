#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="abaabcbabc",part="abc";
    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    cout<<s;
}