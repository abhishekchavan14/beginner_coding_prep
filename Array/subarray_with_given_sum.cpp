#include <iostream>
using namespace std;

// given array: 1 2 3 8
// given sum: 5
// the subarray (2,3) is the required subarray
// output: starting and ending index of the subarray: 2 3(yes 2 and 3 :) )

// O(n^2)
// calculating sum of each subarray and comparing with the given sum.
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum;
//     cin >> sum;
//     int flag=0;
//     for (int i = 0; i < n; i++)
//     {
//         int currentsum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currentsum += arr[j];
//             if (currentsum == sum)
//             {
//                 cout << i + 1 << j + 1 << endl;
//                 flag = 1;
//             }
//         }
//     }
//     if(flag==0){
//         cout<<-1<<endl;
//     }

// }

//O(n)
#include <iostream>
using namespace std;

// trace j till currentsum > s
// then trace i and do currentsum - arr[i] till currentsum = sum
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    int i = 0, j = 0, crrntsum = 0;

    // loop to get currentsum >sum
    while (j < n && crrntsum <= sum)
    {
        crrntsum += arr[j];
        j++;
    }

    // once we get crrntsum>=sum
    if (crrntsum == sum)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    // tracing i
    while (i < n && crrntsum > sum)
    {
        crrntsum -= arr[i];
        i++;
    }
    if (crrntsum == sum)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    cout << "-1" << endl;
}