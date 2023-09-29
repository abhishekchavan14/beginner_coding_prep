// given array: 1,2,3,6,9,10,20,30
// arithmetic subarray example: (3,6), (1,2), (3,6,9), (1,2,3), (10,20,30)
// minimum two elements and same difference between the elements

// Find the length of the longest arithmetic subarray

// approach: create three variables
//  previous difference
// current longest length
// ans i.e. max among the current length

//use Testcases
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int prev_diff = 0;
        int crnt_len = 1;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (prev_diff == arr[i] - arr[i - 1])
            {
                crnt_len++;
            }
            else
            {
                crnt_len = 2;
            }
            prev_diff = arr[i] - arr[i - 1];
            ans = max(ans, crnt_len);
        }

        cout << ans << endl;
        T--;
    }
}
