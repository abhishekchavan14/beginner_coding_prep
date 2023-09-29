#include<bits/stdc++.h>
using namespace std;

//in getbit we find the bit at given position

void getBit(int num, int pos){
    // return((num & (1<<pos)!=0));
    if((num & (1<<pos))!=0){
        cout<<"1";
        return;
    }
    cout<<"0";
}
int main(){
    int num;
    cin>>num;
    int pos;
    cin>>pos;

    getBit(num, pos);

}