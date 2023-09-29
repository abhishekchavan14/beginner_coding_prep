#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // 7 4 -7 -10 15 -5 12
    int sum=0;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        // max_arr[i]=sum;
        ans=max(ans,sum);
    }

    cout<<ans<<endl;
}