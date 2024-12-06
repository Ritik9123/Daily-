#include<iostream>
using namespace std;

int factorial(){
    int a;
    cout<<"enter the number :";
    cin>>a;
    int fact=1;
    for(int i=a;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int ans = factorial();
    cout <<ans<<endl;
}