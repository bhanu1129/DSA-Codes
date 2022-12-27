#include <iostream>
using namespace std;

void update(int **ptr2){
    // *ptr2 = *ptr2 + 1;    //changes the address stored in our ptr
    **ptr2 = **ptr2 +1;   //changes the value of our num
}

int main(){

    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;
    /*
    cout<<"Value at ptr: "<< *ptr <<endl;
    cout<<"Value of ptr: "<< ptr <<endl;
    cout<<"Address of ptr: "<< ptr2 <<endl;

    cout<< *ptr2 <<endl; //this gives address of num 
    cout<< **ptr2 <<endl; //this gives value of num 

    cout<<"Address of ptr: "<<&ptr<<endl;
    cout<<"Address of ptr: "<<ptr2<<endl;
    */
    cout<<endl<<"before:"<<endl;
    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    update(ptr2);
    cout<<endl<<"after:"<<endl;
    cout<<num<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl<<endl;
    

    return 0;
}       