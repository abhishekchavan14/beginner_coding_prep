#include<bits/stdc++.h>
using namespace std;

int main(){
    queue <int> q;
    cout<<q.empty();

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.size();
    cout<<q.empty();
    cout<<q.front();
    q.pop();
    cout<<q.front();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty();
    cout<<q.size();
}