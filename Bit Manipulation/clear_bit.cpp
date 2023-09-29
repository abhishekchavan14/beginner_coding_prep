#include<bits/stdc++.h>
using namespace std;

//in clear bit we make the bit 0 at given position

int main(){

    int num, pos;
    cin>>num>>pos;

    int ans = num & (~(1<<pos));
    cout<<ans;

}