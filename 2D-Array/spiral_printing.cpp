// given 2d array

// row_start / column_start -->01 02 03 04 05<---column_end
//                             06 07 08 09 10
//                             11 12 13 14 15
//              row_end -----> 16 17 18 19 20

// output: 1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12 11

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // we need four variables
    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // 01----05
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // 05----20
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // 20----16
        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        //16----06
        for(int row=row_end; row>=row_start; row--){
            cout<< arr[row][col_start]<<" ";
        }
        col_start++;
    }
}