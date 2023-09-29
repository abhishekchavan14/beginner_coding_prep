#include<iostream>
using namespace std;
//in bubble sort we compare two adjacent elements
//if left element is greater than right element then swap those two
//then similarly check for the next two elements
//finally we get the largest element at the last of the array
//now repeat the above process for n-1 times we get next larger value at the second last place of the array
//then repeat for n-2, n-3...n-(n-1)times....finally array gets sorted by adjusting the larger values at the rightmost end

//approach-->
//we will need two loops
//outer loop which which have the counter which decides how many times the inner loop should run
//inner loop which will compare between the adjacent values incrementaly


void bubble_sort(int arr[], int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                //swap
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    bubble_sort(arr,n);
}