#include<bits/stdc++.h>
using namespace std;

int main(){
    string hexadecimal;
    cin>>hexadecimal;

    // int lastdig = 0;
    // int decimal = 0;
    // int index = 0;
    
    // for(int i=hexadecimal.size() - 1; i>=0; i--){
    //     if(hexadecimal[i]>= '0' && hexadecimal[i]<= '9'){
    //         lastdig = int(hexadecimal[i]) - 48;
    //         decimal+=lastdig * pow(16, index);
    //         index++;
    //     }
    //     else if(hexadecimal[i]>='A' && hexadecimal[i]<='F'){
    //         lastdig = int(hexadecimal[i]) - 55;
    //         decimal+=lastdig * pow(16,index);
    //         index++;   
    //     }
    //     else{
    //         cout<<"Invalid input"<<endl;
    //     }
    // }
    // cout<<"Decimal: "<<decimal;



    //stoi
    cout<<stoi(hexadecimal, 0, 16);
}