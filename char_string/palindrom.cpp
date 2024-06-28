#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

char toLower(char ch){
    char res;
    if(ch>='a' && ch<='z'){
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





void isPalinrom(char name[],int n){
    int s=0,e=n-1;
    bool flag=0;
    while(s<=e){
        if(isValid(name[s]) && isValid(name[e])){
            if(toLower(name[s]) == toLower(name[e])){
                s++;
                e--;
            }     
            else
            {
            flag=1;
            break;
        }
        }else
        {
            if(isValid(name[s])){
                s++;
            }else
            {
                e--;
            }

        }

    }
    if(flag==1){
        cout<<"No palindrom";

    }else
    {
        cout<<"Palindrom";
    }
}

int main()
{
    char name[100];
    cin>>name;

    int n=getLength(name);

    isPalinrom(name,n);


}