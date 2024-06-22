#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
    int start=0,end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArry(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10],n;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseArray(arr,n);

    printArry(arr,n);


}