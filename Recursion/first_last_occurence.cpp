#include<iostream>
using namespace std;


int first_occ(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    first_occ(arr, n, i+1, key);
}

int last_occ(int arr[], int n, int i , int key){
    if(n-1<0){
        return -1;
    }
    if(arr[n-1]==key){
        return n-1;
    }
    last_occ(arr, n-1, 0, key);
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
    cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<first_occ(arr, n,0, key)<<endl;
    cout<<last_occ(arr, n,0, key);
}