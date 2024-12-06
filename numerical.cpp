#include<iostream>
using namespace std;

int countsofnotes(int amount){
    int count500=0,count200=0,count100=0,count50=0,count20=0,count10=0,count5=0,count2=0,count1=0;
    for(;amount>0;){
        switch(true){
            case true:
            if(amount>=500){
                count500++;
                amount=amount-500;
                break;
            }
            if(amount>=200){
                count200++;
                amount=amount-200;
                break;
            }
            if(amount>=100){
                count100++;
                amount=amount-100;
                break;
            }
            if(amount>=50){
                count50++;
                amount=amount-50;
                break;
            }
            if(amount>=20){
                count20++;
                amount=amount-20;
                break;
            }
            if(amount>=10){
                count10++;
                amount=amount-10;
                break;
            }
            if(amount>=5){
                count5++;
                amount-=5;
                break;
            }
            if(amount>=2){
                count2++;
                amount-=2;
                break;
            }
            if(amount>=1){
                count1++;
                amount-=1;
                break;
            }
        }
    }
    if(count500){
        cout<<"Number of 500 notes are "<<count500<<endl;
    }
    if(count200){
        cout<<"Number of 200 notes are "<<count200<<endl;
    }
    if(count100){
        cout<<"Number of 100 notes are "<<count100<<endl;
    }
    if(count50){
        cout<<"Number of 50 notes are "<<count50<<endl;
    }
    if(count20){
        cout<<"Number of 20 notes are "<<count20<<endl;
    }
    if(count10){
        cout<<"Number of 500 notes are "<<count10<<endl;
    }
    if(count5){
        cout<<"Number of 5 notes are "<<count5<<endl;
    }
    if(count2){
        cout<<"Number of 2 notes are "<<count2<<endl;
    }
    if(count1){
        cout<<"Number of 1 notes are "<<count1<<endl;
    }
}


int main(){
    int amount;
    cout<<"Enter amount :";
    cin>>amount;
    if(amount>0){
        countsofnotes(amount);
    }
    else
    cout<<"invalid";
    
}