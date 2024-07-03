#include<iostream>
#include<string>
using namespace std;

bool check(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}

bool checkPermu(string s1,string s2){
    char count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;
    }
    int i=0;
    int windowSize=s1.length();
    int count2[26]={0};
    while(i<windowSize){
        int index=s1[i] - 'a';
        count2[index]++;
        i++;
    }
    if(check(count1,count2)){
        return 1;
    }

    while(i<s2.length()){
        char newChar=s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar=s2[i-windowSize];
        int newIndex=oldChar - 'a';
        count2[newIndex]--;
        i++;
        if(check(count1,count2)){
            return 1;
        }
    }
    return 0;
}
int main()
{
    string s1="ab",s2="eidbaooo";

   bool ans= checkPermu(s1,s2);

   cout<<ans;

}