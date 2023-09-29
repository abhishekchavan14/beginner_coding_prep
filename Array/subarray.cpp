// Give the sum of each subarray for given array 1 2 2 4
//sub arrays:  1, 12, 122, 1224, 2, 22, 224, 2, 24, 4
//output: 1, 3, 5, 9, 2, 4, 8, 2, 6, 4
#include <iostream>
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

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum<<endl;
        }
    }
}
