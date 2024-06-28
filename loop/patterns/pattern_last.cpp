#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    i=1;

    cin>>n;

    while(i<=n){
        int k=1;
        while(k<=n-i+1){
            cout<<k;
            k++;
        }
        int star1=i-1;
        while(star1){
            cout<<"*";
            star1--;
        }
        int star2=i-1;
        while(star2){
            cout<<"*";
            star2--;
        }
        int start=n-i+1;
        while(start){
            cout<<start;
            start--;
        }
      
    
    
    cout<<"\n";
    i++;
    }
}