#include<bits/stdc++.h>
using namespace std;



int main(){

    //take last digit
    //multiply with 2^respective power
    //keep adding and increment power

    // int binary;
    // cin>>binary;

    // int decimal = 0;
    // int lastdig = 0;
    // int i = 0;
    // while(binary!=0){
    //     decimal += binary%10 * pow(2,i);
    //     binary/=10;
    //     i++;
    // }
    // cout<<decimal<<endl;



    //using inbuilt stoi function
    //take input in string
    string binary;
    cin>>binary;

    // stoi(string, 0, base);
    cout<<stoi(binary, 0, 2);

}