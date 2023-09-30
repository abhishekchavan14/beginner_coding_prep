#include<bits/stdc++.h>
using namespace std;

//naive approach O(N)
// int reverse(int num){
//     int revnum = 0;
//     while(num!=0){
//         revnum = (revnum*10) + num%10;
//         num/=10;
//     }
//     return revnum;
// }

//recursion O(N)
// int reverse(int num, int revnum){
//     if(num==0){
//         return revnum;
//     }
//     revnum = (revnum*10) + (num%10);
//     return reverse(num/10, revnum);
// }

//Both above methods cannot reverse 1000 to 0001  O(N)
// void reverse(int num){
//     while(num!=0){
//         cout<<num%10;
//         num/=10;
//     }
// }

//or we can use string O(log(N))
string reverse(int num){
    string str = to_string(num); //---------------------------->O(log(N))
    reverse(str.begin(), str.end()); //------------------------>O(log(N))
    // if we do stoi then it will again cant output 0001
    return str;
}


int main(){

    int num;
    cin>>num;
    // cout<<"Reversed: "<<reverse(num)<<endl;
    // cout<<"Reversed: "<<reverse(num,0)<<endl;
    // reverse(num);
    cout<<"Reversed: "<<reverse(num)<<endl;
    cout<<typeid(reverse(num)).name();
}