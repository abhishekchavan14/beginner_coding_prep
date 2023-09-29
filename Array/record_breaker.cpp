//1 2 0 7 2 0 2 2
//number of record breaking days = 2(output)

//1 2 1
//output=1

//1 5 2 4 3
//output=1

//1 5 0 1 7 3 9
//output=3

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

        int ans = 0;
        int prev_mx = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (n == 1)
            {
                ans = 1;
            }
            else if (arr[i] > prev_mx && arr[i] > arr[i + 1])
            {
                ans++;
                prev_mx = arr[i];
            }
        }
        cout << ans;
        T--;


    }
}
