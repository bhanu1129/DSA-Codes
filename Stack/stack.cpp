#include <iostream>
#include <stack>
using namespace std;

//Stack is LIFO (Last in First out)

//Implementation
class Stack{
    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else cout<<"Stack Overflow"<<endl;
    }

    void pop(){
        if(top>=0) top--;
        else cout<<"Stack Underflow"<<endl;
    }

    int peek(){
        if(top>=0) return arr[top];
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }
};

int main(){

    //USING STL
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // cout<<"Top element: "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top element: "<<s.top()<<endl;

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    cout<<st.isEmpty()<<endl;

    return 0;
}