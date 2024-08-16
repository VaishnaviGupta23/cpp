/*#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;    //we can't use this=  swap(arr[j],arr[min]);
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}*/

/* 
reason:

Certainly, let me explain the reason behind updating the `min` value instead of swapping directly in the inner loop.
In the selection sort algorithm, the idea is to find the minimum element in the unsorted part of the array and swap 
it with the first element of the unsorted part. The variable `min` is used to keep track of the index of the minimum 
element found so far. If you find an element at index `j` that is smaller than the current minimum element at index `min`, 
it means you've found a new minimum in the unsorted part of the array. Instead of swapping the elements right away, you
update the `min` index to `j`. This way, you postpone the actual swapping until you complete the inner loop and are sure 
about the index of the minimum element.The main reason for this approach is to minimize the number of swaps. Swapping 
elements in an array can be a costly operation, especially in terms of performance. By finding the index of the minimum 
element first and then swapping once after the inner loop, you reduce the number of swaps to a minimum, making the algorithm 
more efficient.

*/



#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
 
void input(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}
void print(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

void selectionSort(int arr[],int n){  //iterative method
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void selectionSort1(int arr[],int n,int index=0){   //recursive method

// stable selection sort

} 
int main() {
    int n;
    int arr[100];
    cin>>n;
    input(arr,n);
    selectionSort(arr,n);
    print(arr,n);
};