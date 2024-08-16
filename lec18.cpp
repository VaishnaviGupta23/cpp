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


/*#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}*/


void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    int arr[100];
    cin>>n;
    input(arr,n);
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}