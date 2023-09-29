#include<bits/stdc++.h>
using namespace std;


int main(){

    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();

    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;  //code exits at this line because stack is empty so there is no top element
    
}