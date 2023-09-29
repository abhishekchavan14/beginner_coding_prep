#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int small = min(n,m);
    for(int i =0; i<small; i++)
    {

        if (arr2[i] < arr1[n-1-i])
        {
            swap(arr1[n-1-i], arr2[i]);
        }
        else{
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    
}

int main()
{

    int n, m;
    cin >> n;
    long long arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    long long arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    merge(arr1, arr2, n, m);
}