#include <iostream>
using namespace std;

void inputarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void output(int arr[],int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

int max_element(int arr[],int size){
    int max = INT32_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int min_element(int arr[],int size){
    int min = INT_FAST32_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int random_number[100],size;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the element of array";
    inputarr(random_number,size);
    output(random_number,size);

    cout<<endl<<"minimum element of array is "<<min_element(random_number,size)<<"and maximum element of array is "<<max_element(random_number,size)<<endl;
}

    