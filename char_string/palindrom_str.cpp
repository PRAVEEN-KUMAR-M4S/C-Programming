#include<iostream>
#include<string>
using namespace std;
// int getLength(string s){
//     int count=0;
//     for(int i=0;s[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }

char toLower(char ch){

    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }else{
        return ch-'A'+'a';
    }
}

bool isValid(char ch){
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'|| ch>='0' && ch<='9'){
        return true;
    }
    return false;
}



bool isPalindrome(string s) {
           
            string temp="";
            for(int i=0;i<s.length();i++){
                if(isValid(s[i])){
                    temp.push_back(s[i]);
                }
            }
            // cout<<temp;

            for(int i=0;i<temp.length();i++){
                temp[i]=toLower(temp[i]);
            }
         
             int start=0,end=temp.length()-1;
            while(start<=end){
                if(temp[start]!=temp[end]){
                    return 0;
                }else{
                    start++;
                    end--;
                }
            }
            return 1;
    }




int main()
{
    string s="A man, a plan, a canal: Panama";
 

   

    int n=s.length();
 

  bool ans=  isPalindrome(s);

  if(ans){
    cout<<"palindron";
  }else{
    cout<<"Not palindrom";
  }


}