//form the greatest number possible by interchanging the digits of the given number
#include<bits/stdc++.h>
using namespace std;


int main(){

    int num;
    cin>>num;

    // need to convert and store in a string variable
    string str = to_string(num);
    sort(str.begin(), str.end(), greater<char>());
    cout<<str<<endl;

}