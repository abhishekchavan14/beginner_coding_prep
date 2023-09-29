#include<bits/stdc++.h>
using namespace std;

//{a,b,c} = {},{a},{b},{c},{a,b},{a,c},{b,c},{a,b,c}
//we use bits to get the subsets
//there will be 2^n subsets of any array of size n
//thus we run an outer loop 2^n times and an inner loop n times
//inner loop will traverse through the bits of each value of j
//outer loop will give us the chance to get a one bit with bitwise &
//its hard to understand this way..use pen and paper
//you have written this in the book of dsa


//time complexity : O(n * 2^n)
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    //2^n can be written as (1<<n)
    for(int i =0; i<(1<<n); i++){
        for(int j =0; j<n; j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

}

//recursion approach
// O(2^n)