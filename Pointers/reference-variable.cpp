#include <iostream>
using namespace std;

void update(int& i){    //Pass by reference
    i++;
}

int main(){

    int num = 10;
    int &num2 = num;

    cout<<"Before (num) = "<<num<<endl; //10
    cout<<"num2 = "<<num2<<endl;        //10
    num2++;
    cout<<"After (num) = "<<num<<endl;  //11
    cout<<"num2 = "<<num2<<endl;        //11

    int n = 20;
    cout<<"Before: "<<n<<endl;
    update(n);
    cout<<"After: "<<n<<endl;


    return 0;
}       