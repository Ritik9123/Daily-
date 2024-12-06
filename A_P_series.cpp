#include<iostream>
using namespace std;

int ap_series(int x,int y,int z){
    int nth_term = x+(z-1)*y;
    return nth_term;
}


int main(){
    int a,d,n;
    cout<<"enter the initial value of AP :";
    cin>>a;
    cout<<"enter the difference between numbers :";
    cin>>d;
    cout<<"enter nth term which you want to find :";
    cin>>n;

    cout<<n<<"th term is :"<<ap_series(a,d,n);

}