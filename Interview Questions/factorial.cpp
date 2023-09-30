#include<bits/stdc++.h>
using namespace std;

//recursive
// int factorial(int num){
    
//     if(num == 1 || num==0){
//         return 1;
//     }
//     return num*factorial(num-1);
// }

//iterative
int factorial(int num){
    int fac = 1;
    int i=1;
    while(i!=(num+1)){
        fac*=i++;
    }
    return fac;
}

int main(){

    int num;
    cin>>num;

    cout<<factorial(num);

}