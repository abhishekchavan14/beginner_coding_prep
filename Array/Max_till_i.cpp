//input: 5 4 8 1 2
//output: 5 5 8 8 8

//for every index find the max value among the elements before that element(including that element)

//i start from 0 till n-1
//initialize max_element = arr[0]
//in the loop use max_element=max(max_element, arr[i]) and do i++
//store this values in another array ans[]

#include<iostream>
using namespace std;

void max_till_i(int arr[], int n){
    int ans[n];
    int max_element = arr[0];
    for(int i =0; i<n; i++){
        max_element = max(max_element, arr[i]);
        ans[i] = max_element;
    }

    //print answer
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    //array input
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    max_till_i(arr,n);
    
}