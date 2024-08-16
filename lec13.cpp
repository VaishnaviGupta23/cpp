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
int bs(int arr[],int n,int key){ // not great for repeated values
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

int firstocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int store=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            store=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){ 
            s=mid+1;
        }
        mid = s+(e-s) / 2;
    }
    return store;

}

int lastocc(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int store=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            store=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){ 
            s=mid+1;
        }
        mid = s+(e-s) / 2;
    }
    return store;

}



int main() {
    int arr[100];
    int n;
    cin>>n;
    int key;
    cin>>key;
    input(arr,n);
    int f =firstocc(arr,n,key);
    int l =lastocc(arr,n,key);
    //cout<<"First Occurrence of "<<key<<" is at index : "<<f<<endl;
    //cout<<"Last Occurrence of "<<key<<" is at index : "<<l;
    int total=l-f+1;
    cout<<"Number of Occurrences of "<<key<<" in the array are : "<<total;
    
    
};