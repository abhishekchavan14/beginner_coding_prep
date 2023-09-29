#include<iostream>
using namespace std;

//pick first element and swap it with the smallest element in the array
//neglect the first element after swapping and repeat the process for remaining unsorted array
//to do this we use loop inside another loop
//outer loop will traverse from first element of original array to n-1 element of original array
//inner loop will traverse from second element of original array to n element of original array


void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                //swap
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    return 0;
}