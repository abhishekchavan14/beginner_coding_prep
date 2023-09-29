
// // //Amazon

// // //an element that occurs more than once and whose index of first occurence is smallest
// // //simply it means give the index of the first element which is repeated
// // 1 5 2 3 5 3
// // output: 1


// // O(n^2)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int flag = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     cout << i << endl;
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag == 1)
//             {
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << "No repeating element\n";
//         }
//     }
// }

//O(n)
//We create an array which will store the index of the values in given array
#include"bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<N;i++){
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]]!=-1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
    }

    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }

    else{
        cout<< minidx+1<<endl;
    }

    return 0;
}