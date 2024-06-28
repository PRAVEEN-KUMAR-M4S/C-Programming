#include<iostream>
using namespace std;
int main()
{
    int n,i;
    i=1;

    cin>>n;

    while(i<=n){
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            if(i==j){
                cout<<"*";
            }
            j++;
        }

        int space2=n*2-(i*2);
        while(space2){
            cout<<' ';
            space2--;
        }

        if(n-i){
            cout<<"*";
        }
        
      
    
    
    cout<<"\n";
    i++;
    }
}