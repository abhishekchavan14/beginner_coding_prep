//100 : 1 2 4 5 10 20 25 50 100

#include<bits/stdc++.h>
using namespace std;

//but the result is not sorted
// void factors(int num){
//     int i = 1;
//     while(i<=sqrt(num)){
//         if(num%i==0){
//             cout<<i<<" ";
//             if(i!=num/i){
//             cout<<num/i<<" ";
//             }
//         }
//         i++;
//     }
// }

//using vectors so we can sort the factors
void factors(int num){
    vector <int> v;

    //find the factor pairs(1,100),(2,50) etc and print smaller value and store larger value in vector
    int i =1;
    while(i<=sqrt(num)){
        if(num%i==0){
            cout<<i<<" ";
            if(i!=num/i){
                v.push_back(num/i);
            }
        }
        i++;
    }
    for(int i = v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }
}


int main(){

    //iterative method
    int num;
    cin>>num;
    factors(num);
}