#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    for(int i=0;i<=30;i++){
        int temp=pow(2,i);
        if(temp==n){
            cout<<"yes";
            break;
        }

    }
     cout<<"No";
        
}