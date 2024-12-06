#include<iostream>
using namespace std;
int reverse(int a){
    int x=0;
    while(a!=0){
        int digit=a%10;
        x=x*10+digit;
        a=a/10;
    }
    return x;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    a=reverse(a);
    cout<<"Digits Are: ";
    while(a!=0){
        int digit=a%10;
        cout<<digit<<" ";
        a=a/10;
    }
}