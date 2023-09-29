#include<iostream>
using namespace std;

//(137)8 = (95)10
// digit by digit--> 7*1 + 3*8 + 1*64

int convert(int n){
    int eightpower = 1;
    int ans = 0;
    while(n>0){
        int lastdigit = n%10;
        ans = ans + (lastdigit*eightpower);
        n = n/10;
        eightpower = eightpower*8;
    }
    return ans;
}

int main(){
    int num;
    cin>>num;
    cout<<convert(num);
}