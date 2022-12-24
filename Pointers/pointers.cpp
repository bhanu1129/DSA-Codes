#include <iostream>
using namespace std;
int main(){

    /*
    int i=20;
    int *ptr; //Bad Practice, pointer to int is pointing to a garbage address
    int *ptr=0; //Null pointer
    ptr = &i;
    */

    int num = 5;
    cout<<num<<endl; //num is 5
    int *p = &num;
    (*p)++; //(Value at address stored in p) + 1
    cout<<num<<endl; //num is 6

    //Copying a pointer
    int *q = p;
    cout<<p<<endl<<q<<endl;
    cout<<*p<<endl<<*q<<endl;

    int **p1 = &p;
    cout<<p1<<endl;

    //Pointer Arithmetic
    int i=100;
    int *p2 = &i;
    cout<<p2<<endl;
    p2 = p2+1; /*p2 will now point to the address of the next integer ,i.e 101
                 address + 4 (because integer is 4 bytes)*/
    cout<<p2<<endl;

    return 0;
}       