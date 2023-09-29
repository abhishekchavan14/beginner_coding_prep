//given array has n integers and include 0
//input: -9 10 0 11 1 3 4 15
//output: 2

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int N = 1e6 +2;
    bool check[N]; //int check[N];
    for(int i= 0; i<N; i++){
        check[i] = false; //check[i]=0;
    }

    for(int i = 0; i<n; i++){
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
    }

    for(int i =1; i<N;i++){
        if(check[i] == false){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;
}