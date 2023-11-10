#include <iostream>
using namespace std;

int armstrong(int n){
    int rem,res = 0;

    while(n!=0){
        rem = n%10;
        res += rem*rem*rem;
        n=n/10;
    }

    return res;
}

int main(){

    int n;
    cin>>n;

    int ans = armstrong(n);

    if(ans==n){
        cout<<"OK"<<endl;
    }else{
        cout<<"Error"<<endl;
    }

    return 0;

}