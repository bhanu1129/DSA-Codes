#include <iostream>
using namespace std;

int getMin(int num[], int n){
    int min= INT_MAX;
    for(int i=0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n){
    // int max= INT_MIN;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){

        maxi=max(maxi,num[i]);

        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    // return max;
    return maxi;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<getMax(num, size)<<endl;
    cout<<getMin(num, size);

    return 0;
}