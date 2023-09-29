#include<bits/stdc++.h>
using namespace std;

//in setbit we set the bit as 1 at given position

int main(){

    int num;
    cin>>num;
    int pos;
    cin>>pos;

    int ans=num | (1<<pos);
    cout<<ans;

}