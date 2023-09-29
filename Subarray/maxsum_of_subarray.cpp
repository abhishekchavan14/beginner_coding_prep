#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        int currentsum = 0;
        for (int j = i; j < n; j++)
        {
            currentsum += arr[j];
            maxsum = max(maxsum, currentsum);
        }
    }
    cout << maxsum << endl;
}