//if sum of the factors of a number(not includin the number itself) is equal to that number than that number is said to be perfect number

#include<bits/stdc++.h>
using namespace std;

//naive approach: O(sqrt(num)) since v.size will always be less than sqrt(num)
bool isperfect(int num){
    int sum = 0;
    int i =1;
    while(i<=sqrt(num)){
        if(num%i==0){
            sum+=i;
            if(num/i!=num && num/i!=i){
            sum+=num/i;
            }
        }
        i++;
    }
    return sum==num;
}


int main(){

    int num; 
    cin>>num;

    if(isperfect(num)){
        cout<<"Perfect!"<<endl;
    }
    else{
         cout<<"Not Perfect!"<<endl;
    }
}