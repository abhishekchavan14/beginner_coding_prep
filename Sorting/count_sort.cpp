#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int n){
    // finding max element
    int max_element = INT_MIN;
    for(int i =0; i<n; i++){
        max_element = max(arr[i],max_element);
    }

    //creating frequency array
    int freq[max_element+1] = {0};
    for(int i =0; i<n; i++){
        freq[arr[i]]+=1;
    }

    // making freq array a position array
    for(int i =1; i<(max_element+1); i++){
        freq[i] += freq[i-1];
    }

    //creating answer array
    int ans[n];
    for(int i=0; i<n; i++){
        freq[arr[i]]--;
        ans[freq[arr[i]]] = arr[i];
    }

    //putting ans array to original array
    for(int i = 0; i<n; i++){
        arr[i]=ans[i];
    }

}

int main(){

    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
    cin>>arr[i];
    }
    
    count_sort(arr,n);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

//time complexity
//O(max(n,max_element))
//or we can write it as O(max(n,Ai)) where Ai is an element form the original array(largest element).