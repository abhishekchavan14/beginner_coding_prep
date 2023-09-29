#include<bits/stdc++.h>
using namespace std;


//naive method
//time complexity : O(1)
// int main(){

//     int num;
//     cin>>num;
    
//     int ceiling = ceil(log2(num));
//     int flooring = floor(log2(num));

//     if(ceiling==flooring){
//         cout<<"It is 2^"<<log2(num)<<endl;
//     }
//     else{
//         cout<<"It is not power of two"<<endl;
//     }
// }

// ___________________________________________________________________________________________

//using bit manipulation
//time complexity : O(1)

//concept:
//the number which is power of two ans number - 1 are such that binary form of number - 1 has all the bits after the rightmost set bit i.e. 1 are all flipped.
//example: 6 --> 110 and 5 -->101
//example: 13 --> 1101 and 12 --> 1100
//example : 7 -->111 and 6-->110

//now we see that the number which are power of 2 have only one set bit in their binary representation
//4-->100
//8-->1000
//1--> 1

// now the bitwise '&' of num and num-1 will give 0 when num is power of two
//8-->1000; 7-->0111 => 1000 & 0111 = 0000
//thus is num&num-1 is 0 then num is power of two
// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     int num;
//     cin>>num;

//     if((num & (num-1))==0){
//         cout<<num<<" is 2^"<<log2(num)<<endl;
//     }
//     else{
//         cout<<num<<" is not a power of 2."<<endl;
//     }
    
// }

// ___________________________________________________________________________________________________
//another way
#include<bits/stdc++.h>
using namespace std;

bool check_power_two(int num){
    return (num && !(num & (num-1)));
    //the num && is used for the case when num is 0..as num - 1 will create fault
}

int main(){
    int num;
    cin>>num;
    cout<<check_power_two(num);
}