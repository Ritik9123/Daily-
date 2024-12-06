#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter value :";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout <<endl;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}