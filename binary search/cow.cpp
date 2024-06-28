#include<iostream>
using namespace std;

int distance(int arr[],int n,int k){
    sort(arr.begin(),arr.end());
    int start=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
    }
    cout<<maxi;
}
int main()
{
    int arr[10]={4,2,1,3,6},n=5,k=2;

    distance(arr,n,k);

}