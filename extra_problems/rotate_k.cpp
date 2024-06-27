#include<iostream>
using namespace std;
void rotateArr(int arr[],int n,int k){
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
}
int main()
{
    int arr[10]={1,6,9,10},n=4,k=2;
    rotateArr(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}