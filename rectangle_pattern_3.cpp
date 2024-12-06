#include<iostream>
using namespace std;

int main(){
    int n,count=1;
    //char ch='a';
    cout<<"enter value :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<endl;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }


}