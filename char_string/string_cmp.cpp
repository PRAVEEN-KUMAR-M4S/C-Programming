#include<iostream>
#include<string>
using namespace std;
int main()
{
    char arr[]={'a','a','b','c','c'};
    int n=5;
    int i=0;
    int newIndex=0;

    while(i<n){
        int j=i+1;
        while(j<n && arr[i] == arr[j]){
            j++;
        }

        int count=j-i;
        arr[newIndex++]=arr[i];

        if(count>1){
            string cnt=to_string(count);
          
            for(char ch: arr){
                arr[newIndex++]=ch;
            }
        }
        i=j;
    }
  for(int k=0;k<n;k++){
    cout<<arr[k];
  }
}