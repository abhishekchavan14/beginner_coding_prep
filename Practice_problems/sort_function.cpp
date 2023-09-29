#include<bits/stdc++.h>
using namespace std;



int main(){

    int arr[10] = {9,7,8,6,2,5,4,3,1,10};

    sort(arr,arr+10);

    for(int i =0; i<10; i++){
        cout<<arr[i]<<" ";
    }

}