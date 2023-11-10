#include <iostream>
using namespace std;

void fib(int n){
    int t1=0, t2=1, nextTerm=0;
    for(int i=1; i<=n-2; i++){
        if(i==1) cout<<t1<<" ";
        if(i==2) cout<<t2<<" ";

        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;

        cout<<nextTerm<<" ";
    }

}

int main(){

    int n;
    cin>>n;

    fib(n);

    return 0;
}