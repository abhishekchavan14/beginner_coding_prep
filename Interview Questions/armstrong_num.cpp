//153 is armstrong as 1^3+5^3+3^3 = 153
//where 3 is number of digits in 153

#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(int num){
    int lastdig = 0;

    //calculate length
    int len = 0;
    int temp1 = num;
    while(temp1!=0){
        len++;
        temp1/=10;
    }

    int sum = 0;
    int temp2 = num;

    while(temp2!=0){
        lastdig = temp2%10;
        sum += pow(lastdig,len);
        temp2/=10;
    }

    //we used temp1 and temp2 so we dont alter the value of num as we need to do this last check here
    if(sum==num){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int num;
    cin>>num;

    if(isarmstrong(num)){
        cout<<"Is Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }

}