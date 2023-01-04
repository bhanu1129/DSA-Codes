#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){

    if(s>e) return false;

    int mid = s + (e-s)/2;
    if(arr[mid]==k) return true;

    if(arr[mid]<k)
        return binarySearch(arr, mid+1, e, k);
    else
        return binarySearch(arr, s, mid-1, k);

}

int main() {

    int arr[6]={1,4,6,8,10,20};
    int key=10;
    
    int ans=binarySearch(arr, 0, 5, key);

    if(ans) cout<<"Element found"<<endl;
    else cout<<"Element NOT found"<<endl;

    return 0;
}