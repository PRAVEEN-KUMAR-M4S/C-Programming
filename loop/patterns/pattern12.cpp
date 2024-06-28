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
            ch='A'+j-1;
            cout<<ch<<" ";
            
            j++;
             
    
        }
        cout<<"\n";
       
        i++;
        
    }
}