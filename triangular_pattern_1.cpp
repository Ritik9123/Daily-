#include<iostream>
using namespace std;

int main(){
    int x,count=1;
    cout<<"enter value :";
    cin>>x;

    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=x;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }

}