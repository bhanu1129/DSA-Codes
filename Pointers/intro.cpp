#include <iostream>
using namespace std;
int main(){

    int num = 10;

    cout<<&num<<endl; // address of operator - '&'

    int * ptr = &num; //"ptr" is a pointer which stores the address of an integer "num"

    cout<<"Address is: "<<ptr<<endl; //this will print the address of the integer "num"
    cout<<"Value is: "<<*ptr<<endl; //here '*' is a dereference operator. This will print the value inside the address.

    char ch = 'a';
    char * chptr = &ch;
    cout<<"Address is: "<<chptr<<endl; 
    cout<<"Value is: "<<*chptr<<endl; 

    cout << " size of integer is " << sizeof(num) << endl; //size is 4 because num is an integer
    cout << " size of pointer is " << sizeof(ptr) << endl; //size is 8 because ptr is storing an address


    return 0;
}       