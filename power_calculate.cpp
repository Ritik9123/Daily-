#include<iostream>
using namespace std;

int power(){
    int a,b;
    cin>>a>>b;
    int ans =1;
    for(int i=1; i<=b; i++){
        ans = ans*a;
    }
    return ans;
}



int main(){
    for(;true;){
        int pow = power();
    cout<<pow<<endl;
    }
        

    
}