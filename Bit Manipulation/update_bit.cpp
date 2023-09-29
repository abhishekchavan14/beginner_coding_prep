#include<bits/stdc++.h>
using namespace std;



// int main(){

//     int num,pos,bit;
//     cin>>num>>pos>>bit;

//     if(bit==0){
//         //clearbit
//         int ans = num & (~(1<<pos));
//         cout<<ans;
//     }
//     else if(bit==1){
//         //setbit
//         int ans = num | (1<<pos);
//         cout<<ans;
//     }
// }

#include<bits/stdc++.h>
using namespace std;



int main(){

    int num, pos, bit;
    cin>>num>>pos>>bit;

    //clearbit
    num = num & (~(1<<pos));

    int ans=  num | (bit<<pos);    //note
    cout<<ans;

}