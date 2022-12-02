#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of the string: ";
    cin>>n;
    
    char arr[n+1];
    cout<<"Enter the string: ";
    cin>>arr;

    bool check=true;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check=false;
            break;
        }
    }

    if(check==true)
        cout<<"Palindrome"<<endl;
    else{
        cout<<"Not Palindrome"<<endl;
    }

return 0;
}