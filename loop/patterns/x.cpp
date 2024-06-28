#include<iostream>
using namespace std;
int main(){
    int n=9;
    int i=1,j,space;

    while(i<=n){
        space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        j=n-i+1;
        while(j){
            cout<<"* ";
            j--;

        }
        cout<<"\n";
        i++;
    }
    int k=2;
    while(k<=n){
        space=n-k;
        while(space){
            cout<<" ";
            space--;
        }
        j=k;
        while(j){
            cout<<"* ";
            j--;
        }
        cout<<"\n";
        k++;
    }
}