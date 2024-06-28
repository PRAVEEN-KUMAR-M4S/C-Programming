#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int i=1,j,space;
    while(i<=n){
        space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        if(i == 1 || i==n){
            j=i;
            while(j){
                cout<<"* ";
                j--;
            }
        }else{
            cout<<"*";
            space=i-1;
            while(space){
                cout<<"  ";
                space--;
            }
            cout<<"*";
        }
        cout<<"\n";
        i++;
    }
}