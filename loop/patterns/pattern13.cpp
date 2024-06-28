#include<iostream>
using namespace std;
int main()
{
    int row,i,j,k=1;
    char ch='A';
    
    cin>>row;

    i=1;

    while(i<=row){
        j=1;
        while(j<=row){
            ch='A'+k-1;
            cout<<ch<<" ";
            k++;
            
            j++;
             
    
        }
        cout<<"\n";
       
        i++;
        
    }
}