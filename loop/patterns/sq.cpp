#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1,j,space;
    while(i<=n){
        


        if(i==1 || i==n){
          
            j=n;
            while(j){
                cout<<"* ";
                j--;
            }
        
        }else{
            space=3;
            cout<<"*";
             while(space){
            cout<<"  ";
            space--;
        }
        cout<<" *";
        }
        cout<<"\n";
        i++;
       
    }
}