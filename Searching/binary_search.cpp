#include <iostream>
using namespace std;

// find mid element
// if key > mid then shift starting pointer to mid+1
// if key < mid then shift end pointer to mid-1
// recursively call binary search

int binary_search(int arr[], int n, int key)
{
    int sp = 0;
    int ep = n - 1;
    int mid;
    while (sp <= ep)
    {
        mid = (sp+ep)/2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            sp = mid + 1;
        }
        else
        {
            ep = mid- 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    //enter already sorted array...we have yet not learned sorting
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binary_search(arr, n, key);
}