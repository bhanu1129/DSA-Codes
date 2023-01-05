#include <iostream>

using namespace std;

void reverse(string& s, int i){
    
    int n=s.length()-1;
    if(i>n-i) return ;
    
    swap(s[i], s[n-i]);
    i++;
    
    reverse(s,i);
    
}

int main()
{
    string s = "Hello";
    reverse(s,0);
    cout<<s<<endl;

    return 0;
}