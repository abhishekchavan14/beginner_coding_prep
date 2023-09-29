#include<bits/stdc++.h>
using namespace std;

bool check_array_sort(int arr[], int n){
    if(n==1){
        return true;
    }
    bool rest_Array = check_array_sort(arr+1, n-1);
    if(arr[0]<arr[1] && rest_Array==true){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    cout<<check_array_sort(arr,n);

}