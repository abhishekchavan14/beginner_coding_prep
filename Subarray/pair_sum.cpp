// //input: 1 2 3 4, k=5
// //output: index of the two elements whose sum is 5 --> 1 4 , 2 3

// //O(n^2)
// #include"bits/stdc++.h"
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int flag=0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             int pair_sum = arr[i]+arr[j];
//             if(pair_sum == k){
//                 cout<<i+1<<" "<<j+1<<endl;
//                 flag=1;
//             }
//             else{
//                 pair_sum=0;
//             }
//         }
//     }
//     if(flag==0){
//         cout<<"-1"<<endl;
//     }
//     }

// O(n)
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

        int k;
        cin >> k;
        int i = 0;
        int j = n - 1;
        int sum = 0;
        int flag = 0;
        while (i < j)
        {
            sum = arr[i] + arr[j];
            if (k == sum)
            {
                cout << i << " " << j << endl;
                i++;
                j--;
                flag = 1;
            }
            else if (k < sum)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        if (flag == 0)
        {
            cout << "-1" << endl;
        }
    }