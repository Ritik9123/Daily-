#include<iostream>
using namespace std;

bool even(int x){
    if(x&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int a;
    cout<<"enter number :";
    cin>>a;
    if(even(a)==0){
        cout<<"odd number.";
    }
    else{
        cout<<"even number.";
    }

}