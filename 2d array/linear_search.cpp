#include<iostream>
using namespace std;
bool findTarget(int arr[][3],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    bool ans=findTarget(arr,7,3,3);

    if(ans){
        cout<<"Element found at loction of array";
    }else{
        cout<<"Element not found at location";
    }

}