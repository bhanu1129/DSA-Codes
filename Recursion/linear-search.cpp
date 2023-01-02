#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int n){
    if(size==0) return 0;

    if(arr[0]==n) return 1;
    else{
        return linearSearch(arr+1, size-1, n);
    }
}

int main() {

    int arr[6]={1,4,6,5,7,10};
    int size=6;
    
    int ans=linearSearch(arr, size, 5);

    if(ans) cout<<"Element found"<<endl;
    else cout<<"Element NOT found"<<endl;

    return 0;
}