#include<bits/stdc++.h>
using namespace std;

//O(n*m)
// int main(){

//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i =0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     int target;
//     cin>>target;

//     for(int i=0; i<n; i++){
//         for(int j =0; j<m; j++){
//             if(arr[i][j]==target){
//                 cout<<"YES";
//                 return 1;
//             }
//         }
//     }
//     cout<<"NO";
// }


//O((n-1)+(m-1))/
int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cin>>target;
    
    int i=0; 
    int j=m-1;
    while(i<n && j>=0){
        if(arr[i][j]==target){
            cout<<"YES";
            return 1;
        }
        else if(arr[i][j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"NO";

}