#include <bits/stdc++.h>
using namespace std;

// O(n^2)
 bool duplicate(int arr[], int n){
     for(int i =0; i<n-1; i++){
         for(int j=i+1; j<n; j++){
             if(arr[i]==arr[j]){
                 return true;
             }
         }
     }
     return false;
 }

//O(nlogn)
//sort the array
//then check the adjacent elements

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << duplicate(arr, n);
}