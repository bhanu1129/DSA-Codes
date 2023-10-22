#include <iostream>
using namespace std;

class student{
    string name;

    public:
    int age;
    bool gender;

    //Default constructor
    student(){
        cout<<"Default constructor"<<endl;
    }

    //Parameterised Constructor
    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    }

    //Copy Constructor
    student(student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    //Destructor
    ~student(){
        cout<<"Destructor Called"<<endl;
    }

    //Setter
    void setName(string s){
        name = s;
    }
    
    //Getter
    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    //operator overloading
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main(){

    student a;
    a.setName("bhanu");
    a.age = 21;
    a.gender = 0;

    a.getName();
    // cout<<a.age<<endl;

    student b("Bhanu", 21, 0);
    b.printInfo();

    student c = b;

    if(c==a){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }

    return 0;
}