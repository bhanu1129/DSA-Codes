#include <iostream>
using namespace std;

int pow(int n){
    if(n==0) return 1;
    int partialAns = pow(n-1);
    return 2*partialAns;
}

int main() {
    int n;
    cin>>n;
    int ans = pow(n);
    cout<<ans<<endl;

    return 0;
}