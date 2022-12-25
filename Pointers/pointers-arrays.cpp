#include <iostream>
using namespace std;
int main(){

    int arr[5]={1,2,3,4,5};
    int *p=&arr[0];
    /* 
    cout<<p<<endl;      //this gives address of 0th index of the array
    cout<<arr<<endl;    //this also gives address of 0th index of the array
    cout<<*arr<<endl;   //Value at 0th index, i.e, 1
    */
    cout<<"Value at 1st index: "<<*(arr+1)<<endl; 
    cout<<"Address of value at 1st index: "<<&arr[1]<<endl;  
    cout<<"Address of value at 1st index: "<<arr+1<<endl; 

    cout<<"Value at 2nd index: "<<*(arr+2)<<endl;
    cout<<"Address of value at 2nd index: "<<&arr[2]<<endl;

    //------------------------------------------------------------------------------//

    int temp[10];
    cout << sizeof(temp) << endl;   //40
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;    //8
    cout << sizeof(*ptr) << endl;   //4
    cout << sizeof(&ptr) << endl;   //8

    //------------------------------------------------------------------------------//

    int a[10];
    //a=a+1;    //error
    int *ptr1=&arr[0];
    cout<<ptr1<<endl;
    ptr1 = ptr1+1;
    cout<<ptr1<<endl;


    return 0;
}       