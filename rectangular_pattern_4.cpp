#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"enter value:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'a'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'a'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    char ch = 'a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'a'+i+j-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }


}