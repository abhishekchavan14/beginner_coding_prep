#include<bits/stdc++.h>
using namespace std;



int main(){

    int num;
    cin>>num;

    //USING VECTOR / ARRAY
    // int bit = 0;
    // vector<int> binary;
    // while(num>0){
    //   bit = num%2;
    //   binary.push_back(bit);
    //   num/=2;
    // }
    // for(int i =binary.size()-1; i>=0; i--){
    //     cout<<binary[i];
    // }

    //USING MATHS
    // int bit = 0;
    // int binary = 0;
    // int i = 1;
    // while(num>0){
    //     bit = num%2;
    //     binary+= bit * i;
    //     i*=10;
    //     num/=2;
    // }
    // cout<<binary;

    //simply printing each bit
    int bit = 0;
    while(num>0){
        bit = num%2;
        num/=2;
        cout<<bit;
    }
}