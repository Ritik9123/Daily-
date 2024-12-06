#include<iostream>
using namespace std;
int reverse(int a){
    int num=0;
    for(;a!=0;){
        int digit = a%10;
        num = num*10+digit;
        a=a/10;
    }
    return num;
}


int main(){
    int a;
    cout<<"enter the number :";
    cin>>a;
    int z=reverse(a);
    cout<<z;
}
