#include <bits/stdc++.h>
using namespace std;

// 5 -6 4 1 -5
// O(n)

int kadanes_algo(int arr[], int n){
    int sum = 0;
    int max_sum = INT_MIN;

    for(int i =0; i<n; i++){
        sum+=arr[i];
        max_sum = max(max_sum, sum);
        if(sum<0){
            sum=0;
        }
    }

    return max_sum;
}
int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<kadanes_algo(arr,n);
}