// Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

// Each student gets one packet.
// The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.

// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

#include<bits/stdc++.h>
using namespace std;

int min_choco(int arr[], int n, int m){

    sort(arr, arr+n);
    int curr_diff = 0;
    int min_diff = INT_MAX;
    for(int i =0; i<=n-m; i++){
        curr_diff = arr[i+m-1] - arr[i];
        min_diff = min(min_diff, curr_diff);
    }

    return min_diff;
}

int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
    cin>>arr[i];
    }
    
    int m;
    cin>>m;

    cout<<min_choco(arr, n,m);

}