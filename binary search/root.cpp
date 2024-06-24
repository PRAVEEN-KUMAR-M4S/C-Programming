#include<iostream>
using namespace std;
double precision(int n,int temp,int p){
    double factor=1;
    double ans=0;

    for(int i=0;i<p;i++){
        factor=factor/10;
        for(int j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}


int sqroot(int n){
    int strat=0,end=n;
    int mid=strat+(end-strat)/2;

    while(strat<end){
        if(mid*mid ==  n){
            return mid;
        }
        else if(mid*mid < n){
            strat=mid+1;
        }
        else if(mid * mid > n){
            end=mid-1;
        }
        mid=strat+(end-strat)/2;
    }
}
int main()
{
    int n=36;

    int temp=sqroot(n);

    cout<<precision(n,temp,5);
}