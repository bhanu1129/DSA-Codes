#include <iostream>
using namespace std;

int getSum(int arr[], int size){

    if(size==0) return 0;

    int sum=arr[0];
    sum+=getSum(arr+1, size-1);

    return sum;

}

int main() {

    int arr[5]={5,5,10,15,5};
    int size = 5;

    int sum = getSum(arr,size);

    cout<<"Sum is: "<<sum<<endl;

    return 0;
}