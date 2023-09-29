// Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero. 

// Note: Return 1, if there is at least one triplet following the condition else return 0.

// Example 1:

// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1


#include <bits/stdc++.h>
using namespace std;

bool triplet(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            if(arr[i]+l+r == 0){
                return true;
            }
            else if(arr[i]+l+r<0){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
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

    cout << triplet(arr, n);
}