#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"enter value :";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            char ch='a'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            char ch='a'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    char ch='a';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    

}