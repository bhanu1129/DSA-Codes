#include <iostream>
using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"inherited from A"<<endl;
    }
};

class B{
    public:
    void Bfunc(){
        cout<<"inherited from B"<<endl;
    }
};

class C : public A, public B{
};

int main(){

    C c;
    c.Afunc();
    c.Bfunc();
    return 0;

}