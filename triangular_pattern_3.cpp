#include<iostream>
using namespace std;
int main(){

    int n,i,j;
    cin>>n;
    cout<<endl;
    
    for(i=1;i<=n;i++){
        char ch1='a'+n-i;
        for(j=1;j<=i;j++){
            
            cout<<ch1<<" ";
            ch1++;
        }
        cout<<endl;
    }
}