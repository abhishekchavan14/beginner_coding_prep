#include <iostream>
using namespace std;

// start from the second element(index=1)
// treat the array to its left as sorted array
// shift to next index any element in the sorted array which is greater than the current element
// and shift the current element at its new position

// we will create outer loop which starts from second element(index=1)
// the inner loop will be for the sorted array traversing and shifting

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // remember to start from 1
    {
        int current = arr[i]; // we will need variable current as arr[i] changes later
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j]; // initially it seems arr[j+1] can be written as arr[i] but no..later steps deny it
            j--;
        }
        arr[j + 1] = current; // here we cant use arr[i] as it had changed when we used arr[j+1]
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    insertion_sort(arr, n);
}