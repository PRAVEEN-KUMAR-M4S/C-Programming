#include<iostream>
using namespace std;
int dupli(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
int main()
{
    int arr[100]={4,2,2,3,1},n=5;

    cout<<dupli(arr,5);

}