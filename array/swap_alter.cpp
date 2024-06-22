#include<iostream>
using namespace std;
void swapAlter(int arr[],int n){
    int start=0,alter=1;

    while(alter <n){
        swap(arr[start],arr[alter]);
        start=start+2;
        alter=start+1;
    }



}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100]={1,2,3,4,5,6};

    swapAlter(arr,6);
    printArr(arr,6);



}