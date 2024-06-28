#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    int mini=999;
    for(int i=0;i<n-1;i++){
        mini=i;
        for(int j=i+1;j<n;j++){
          if(arr[j] < arr[mini]){
            mini=j;
          }
        }
        swap(arr[mini],arr[i]);
    }
}
int main()
{
    int arr[10]={5,10,55,1,8},n=5;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}