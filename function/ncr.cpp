#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int ans;

    ans=((factorial(n))/(factorial(r)*factorial(n-r)));

    return ans;
}


int main(){

int ans=nCr(8,0);

cout<<ans;


}