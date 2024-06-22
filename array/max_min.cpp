#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    int maxi=INT8_MIN;
    int mini=INT8_MAX;

    cout<<"enter the sized";
    cin>>n;

    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi=arr[i];
        }
          if(arr[i] < mini){
            mini=arr[i];
        }
    }
    cout<<maxi<<" "<<mini;

    return 0;
}