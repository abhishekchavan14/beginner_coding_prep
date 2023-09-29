#include<bits/stdc++.h>
using namespace std;

int findSum(int A[], int N){
    int max_num = INT_MIN;
    	int min_num = INT_MAX;
    	
    	for(int i=0; i<N; i++){
    	    max_num = max(max_num, A[i]);
    	}
    	
    	for(int i =0; i<N; i++){
    	    min_num = min(min_num, A[i]);
    	}
    	
    	return max_num + min_num;
}

int main(){

    int N; 
    cin>>N;

    int A[N];
    for(int i =0; i<N; i++){
        cin>>A[i];
    }

    cout<<findSum(A, N);

}