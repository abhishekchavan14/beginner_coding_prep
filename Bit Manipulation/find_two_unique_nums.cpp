//given array: 2 4 6 7 4 5 6 2
//o/p: 7 5

//first we will find the xorsum by doing xor of all the elements
//we will get the xor of the two unique numbers as xorsum at the end 
//now in the resultant xorsum we look at the rightmost setbit and in the given array find the elements which have a setbit at the same position as of resultant xorsum
//we do the above step to find one of the two unique elements
//after finding all such elements we do xor of all those elements and we get the unique number as other repeated numbers will be canceled out
//Finally doing xor of the found element with the resultant xorsum we got earlier we can get the second unique element
//look in notebook

#include<bits/stdc++.h>
using namespace std;

bool getbit(int num, int pos){
    return ((num & (1<<pos))!=0);
}

int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
    cin>>arr[i];
    }
    
    int xorsum =0;
    //finding xor of all elements
    for(int i =0; i<n; i++){
        xorsum = xorsum ^ arr[i];
    }
    // cout<<xorsum<<endl;
    // int tempxorsum = xorsum;
    //0010 xorsum

    //we need to find the position of setbit in xorsum
    int setbit =0;
    int pos = 0;
    int count = 1;
    while(setbit==0){
        setbit = xorsum & count;
        count*=2;
        pos++;
        // xorsum = xorsum>>1;
    }
    //pos - 1 kara laganr bcoz of one extra iteration

    //now we need to find the element which has setbit at this position in the array
    //for that we know the getbit function

    int ans1 = 0;
    for(int i =0; i<n ; i++){
        if(getbit(arr[i],pos-1)){
            ans1 = ans1 ^ arr[i];
        }
    }

    //ans1 = 0111 i.e. 7 i.e. one of the unique element

    int ans2 = ans1 ^ xorsum;

    cout<<ans1<<" "<<ans2;

}
