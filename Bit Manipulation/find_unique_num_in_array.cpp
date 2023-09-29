//given array: 2,4,6,3,4,6,2
//o/p: 3.....as 3 is only element which is not repeated in the array

//In XOR :
// 1^1 = 0
//0^0 = 0
//1^0 = 1
//0^1 = 1
//i.e. both the bits should be different to get one as result

// XOR of same number result in 0
//example: 1001 XOR(^) 1001 => 0000
//so if do xor of all the elements then the repeated will result in zero and the only non repeating one will be left
//its hard to understan so look in notebook

#include<bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int xorsum = 0;
    for(int i =0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }

    cout<<xorsum;
    

}