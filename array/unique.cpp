#include<iostream>
using namespace std;

int uniqueEle(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[100]={2,3,1,6,3,6,2},n=7;

    int res=uniqueEle(arr,n);

    cout<<res;

}