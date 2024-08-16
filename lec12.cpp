#include <iostream>
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
int bs(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;  // to prevent int out of index

    while(s<=e){
        if(arr[mid]==key){
        return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2; // have to update mid
    return -1;
    }
    
}
int main() {
    int arr[100];
    int n;
    cin>>n;
    int key;
    cin>>key;
    input(arr,n);
    int ans =bs(arr,n,key);
    if(ans == -1){
        cout<<"Element is not present in array";
    }
    else{
        cout<<"Element is present at index "<<ans;
    }
};