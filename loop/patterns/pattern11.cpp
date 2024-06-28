#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    char ch='A';
    
    cin>>row;

    i=1;

    while(i<=row){
        j=1;
        while(j<=row){
            cout<<ch<<" ";
            j++;
    
        }
        cout<<"\n";
       
        i++;
         ch='A'+i-1;
    }
}