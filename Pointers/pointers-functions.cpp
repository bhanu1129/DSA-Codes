#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p = p+1;
    // cout<<p<<endl;

    *p= *p+1;
}

int getSum(int arr[], int n){       //pointer arr is passed in the function (its same as *arr)
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        // sum+=i[arr];
    }
    return sum;
}

int main(){

    int num = 10;
    int *p = &num;
    print(p);
    update(p);
    print(p);
    
    int arr[5]={1,2,3,4,5};
    cout<<getSum(arr, 5)<<endl;     //arr is a pointer

    //BENEFIT - we can send a part of an array
    cout<<getSum(arr+3, 2)<<endl;
    

    return 0;
}       