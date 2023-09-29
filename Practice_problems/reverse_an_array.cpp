//this example also contains how we can return an array from a function using pointers
//although for this example we could have used void type function and cout the array 

#include<bits/stdc++.h>
using namespace std;

int* reverse_array(int arr[], int n){

    for(int i =0; i<n/2; i++){
        int temp = arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i] = temp;
    }
    return arr;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    
    int* ptr = reverse_array(arr, n);

    for(int i=0; i<n; i++){
        cout<<*(ptr+i)<<" ";
    }

}