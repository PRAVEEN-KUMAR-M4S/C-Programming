#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char n;
    cout<<"Enter the number : ";
    cin>>a>>b;

    cout<<"Enter the expression : ";
    cin>>n;

    switch(n){
        case '+':cout<<"Sum is : "<<a+b;
                    break;
        case '*':cout<<"Multiplication is : "<<a*b;
                    break;
         case '/':cout<<"division is : "<<a/b;
                    break;
                     case '-':cout<<"differ is : "<<a-b;
                    break;
                     case '%':cout<<"Mod is : "<<a%b;
                    break;
        default:cout<<"wrong input";
    }


}