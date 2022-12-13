#include<iostream>
#include<vector>
using namespace std;

void checkPrime(bool prime[]) {

    for(int i=2;i<=1000000;i++){
        prime[i]=1;
    }

    for(int i = 2; i<=1000000; i++) {
        if(prime[i]){
            for(int j = 2*i; j<=1000000; j+=i){
                prime[j] = 0;   
            }
        }
    }

    prime[0] = prime[1] = 0;
}

int main() {

    bool prime[1000001];
    checkPrime(prime);

    int n;
    cin >> n;

    if(prime[n]) {
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not a Prime Number" << endl;
    }

    return 0;
}