#include<iostream>
using namespace std;

int sumOdN(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[50],n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<sumOdN(arr,n);


}