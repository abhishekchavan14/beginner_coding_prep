#include<bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n ; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        int counter = i;
        while(counter<n){
            for(int j = i; j<=counter; j++){
                cout<<arr[j];
            }
            counter++;
            cout<<endl;
        }
    }
    

}