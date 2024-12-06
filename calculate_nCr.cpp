#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i=a;i>=1;i--){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int num = factorial(n);
    int deno = factorial(r)*factorial(n-r);
    int ncr = num/deno;
    return ncr;
}

int main(){
    int n,r;
    cout<<"enter 'n' & 'r' :";
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<"nCr or n & r is :"<<ans<<endl;


}