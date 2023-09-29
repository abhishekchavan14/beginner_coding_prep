#include <bits/stdc++.h>
using namespace std;

void merger(int arr[], int st, int en)
{
    int mid = (st + en) / 2;
    int len1 = mid - st + 1;
    int len2 = en - mid;

    int temp1[len1];
    int temp2[len2];
    
    int k = st;

    for(int i =0; i<len1; i++){
        temp1[i] = arr[k];
        k++;
    }

    k = mid+1;

    for(int i =0; i<len2; i++){
        temp2[i] = arr[k];
        k++;
    }

    int index1=0; 
    int index2 = 0;
    k = st;
    while(index1<len1 && index2<len2){
        if(temp1[index1]<temp2[index2]){
            arr[k] = temp1[index1];
            k++;
            index1++;
        }
        else{
            arr[k] = temp2[index2];
            k++;
            index2++;
        }
    }
    while(index1<len1){
        arr[k] = temp1[index1];
            k++;
            index1++;
    }
    while(index2<len2){
        arr[k] = temp2[index2];
            k++;
            index2++;
    }
}

void mergeSort(int arr[], int st, int en)
{
    int mid = (st + en) / 2;

    if (st >= en)
    {
        return;
    }

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, en);

    merger(arr, st, en);
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

    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}