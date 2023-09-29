//given array : 10, 16, 7, 14, 5, 3, 12, 9
//reduced array : 4 7 2 6 1 0 5 3
//i.e. the smallest element is put zero and largest element is put n-1

#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool myCompare(pair <int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0; i<n; i++){
    cin>>arr[i];
    }
    
    vector < pair<int, int> > v;
    for(int i =0; i<n; i++){
        
        // v.push_back(make_pair(arr[i], i));
        pair <int, int> p;
        p.first = arr[i];
        p.second = i;
        v.push_back(p);
    }

    sort(v.begin(), v.end(), myCompare);
    for(int i =0; i<n; i++){
        arr[v[i].second] = i;
    }

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}