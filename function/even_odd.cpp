#include<iostream>
using namespace std;

void EvenOdd(int n){
    if(n%2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
}



int main(){


EvenOdd(5);
EvenOdd(60);
EvenOdd(10);
EvenOdd(4);
EvenOdd(2);
}