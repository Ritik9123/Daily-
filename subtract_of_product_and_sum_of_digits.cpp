#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number :";
    cin>>a;
    int digit,prod=1,sum=0;
    for(;a!=0;){
        digit=a%10;
        prod=prod*digit;
        sum=sum+digit;
        
        a=a/10;

        
    }
    int ans = prod-sum;
    cout<<ans;
}