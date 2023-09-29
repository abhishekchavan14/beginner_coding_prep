//check how many ones are there in the binary representation of a given number
//9 --> 1001 has 2 ones

//concept: 
//we will do bitwise and on num and num-1 till we get zero
//we will keep a count of how many times we carried of the bitwise and operation
//this count is equal the number of ones bits in the given number
//9-->1001; 8--> 1000
//1001 & 1000 = 1000 i.e. 8
//8 & 7
//1000 & 0111 = 0000
//as we can see we carried out bitwise and operation two times and there are two ones in binary representation of 9

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num;
    cin>>num;
    int count = 0;
    while(num!=0){
        num = num&(num-1);
        count++;
    }
    cout<<"There are "<<count<<" ones in the binary representation of entered value."<<endl;
}
