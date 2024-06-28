#include<iostream>
#include<string>
using namespace std;

string reverseStr(string s,int start,int end){
    string temp="";
    while(start<=end){
       temp.push_back(s[start]); 
        start++;
    
    }
    cout<<temp;
  
    return s;
    

}

void isWordReversed(string s){
    int start=0;
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
         temp=temp+   reverseStr(s,start,i-1);
            i++;
            start=i;
        }
    }
   
   
}


int main(){

    string s="hello my name is preveen";

    isWordReversed(s);


}
