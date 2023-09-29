#include<iostream>
using namespace std;
//(450)10 = (1C2)16
//450 / 256--> quotient = 1; remainder = 194
//194 / 16--> quotient = 12; remainder = 2
//2 / 1--> quotient = 2; remainder = 0;

//now for quotients between [10,15]-->
//10 - A; 11 - b...etc

string convert(int n){
    string ans = "";
    int quotient = 0;
    int remainder = 0;
    int x = 1;
    while(x<n){
        x*=16;
    }
    x/=16;
    while(x>0){
        quotient = n/x;
        remainder = n - quotient*x;
        if(quotient<=9){
        ans = ans + to_string(quotient);
        }
        else{
            char c = 'A' + (quotient - 10);
            ans.push_back(c);
        }
        x/=16;
        n = remainder;
    }
    return ans;
    }

int main(){
    int num;
    cin >>num;
    cout<<convert(num);
}