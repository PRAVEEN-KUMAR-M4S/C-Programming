#include<iostream>
using namespace std;
bool sortedRotated(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
        if(arr[n-1] > arr[0]){
            count++;
        }
        if(count>1){
            return false;

        }else{
            return true;
        }
    }
}
int main(){
    int arr[10]={3,14,5,1,2},n=5;
    bool ans=sortedRotated(arr,n);
    cout<<ans;
}