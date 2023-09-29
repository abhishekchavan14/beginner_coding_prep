#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int st, int en){
    //what partition function do is it puts the pivot at its proper index

    int i = st-1;
    int j = st;
    int pivot = arr[en];
    while(j<en){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
            j++;
        }
        else{
            j++;
        }
    }
    swap(arr[i+1],arr[en]);
    return i+1;
}
void quick_sort(int arr[], int st, int en){
    if(st>=en){
        return;
    }

    int pindex = partition(arr, st, en);
    quick_sort(arr,st,pindex-1);
    quick_sort(arr,pindex+1, en);

}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
    cin>>arr[i];
    }
    
    quick_sort(arr, 0, n-1);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}