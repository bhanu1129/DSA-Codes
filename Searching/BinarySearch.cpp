#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }else if(key<arr[mid]){
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
   
    int even[6]={1,2,3,34,64,87};
    int odd[5]={5,10,15,30,32 };
   
    // int key1, key2;
    // cout<<"Enter the key to search in even arr: "<<endl;
    // cin>>key1;

    // cout<<"Enter the key to search in odd arr: "<<endl;
    // cin>>key2;

    int evenIndex = binarySearch(even, 6, 64);
    int oddIndex = binarySearch(odd, 5, 32);

    cout<<"Index of key1 is: "<<evenIndex<<endl;
    cout<<"Index of key2 is: "<<oddIndex<<endl;

}