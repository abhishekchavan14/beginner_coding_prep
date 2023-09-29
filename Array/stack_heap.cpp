#include<bits/stdc++.h>
using namespace std;



int main(){

    int a=10;// this is stored in stack

    int *p = new int();// pointer p is stored in STACK
    //but p points to an address of a memory allocated for int type in the HEAP

    *p = 10;// value stored in HEAP

    delete(p);//memory deallocated that was allocated in HEAP
    //but pointer is still in STACK

    p = new int[4]; //allocating memory for an array of size 4 in HEAP //also reusing the pointer from STACK
    //p is pointing to the address of starting index of the array in HEAP

    delete[]p; //deallocates the memory for array in HEAP

    p=NULL; //empties the pointer stating it is no longer used to allocate memory in HEAP

    return 0; 

}