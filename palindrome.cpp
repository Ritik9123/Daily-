#include<iostream>
using namespace std;

bool check_palindrome(char ch[],int n){
    int s=0;
    int e=n-1;
    for(;s<=e;){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int length(char ch[]){
    int n=0;
    int i=0;
    while (ch[i]!='\0'){
        n=n+1;
        i++;
    }
    return n;
}

void reverse(char ch[],int n){
    int srt=0;
    int end=n-1;
    for(;srt<end;){
        swap(ch[srt],ch[end]);
        srt++;
        end--;
    }
}

int main(){
    char word[10];
    cout<<"enter the word:";
    cin.getline(word,10);
    cout<<word;
    cout<<"length :"<<length(word)<<endl;
    int len= length(word);
    reverse(word,len);
    cout<<word;
    bool n=check_palindrome(word,len);
    cout<<endl<<n<<endl;
    if(n==1){
        cout<<"word is palindrome";
    }
    else{
        cout<<"word is not palindrome";
    }
}