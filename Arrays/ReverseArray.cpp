#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int arr[5]={2,4,78,-12,200};
    int brr[6]={56,57,69,70,-21,-69};
    
    reverse(arr,5);
    
    printArray(arr, 5);
    
    return 0;
}