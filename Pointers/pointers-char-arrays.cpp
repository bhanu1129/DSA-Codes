#include <iostream>
using namespace std;
int main(){

    char ch[5]="abcd";
    cout<<ch<<endl;     //Prints the string
    char *ptr = &ch[0];
    cout<<ptr<<endl;    //Prints entire string

    char temp = 'w';
    char *p = &temp;
    cout<<p<<endl;

    return 0;
}       