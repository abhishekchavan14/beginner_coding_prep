#include<bits/stdc++.h>

using namespace std;



int main(){

    string str = "Abhi shek";
    cout<<str<<endl;

    string str1(5,'a');
    cout<<str1<<endl;

    string str2;
    cin>>str2;
    cout<<str2<<endl;

    //to input a sentence
    string str3;
    cin.ignore();//used as flush
    getline(cin, str3);
    cout<<str3<<endl;

    string str4;
    getline(cin,str4);
    cout<<str4<<endl;

}