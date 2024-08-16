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

void end(int arr[],int n){
    int s=0;
    int maxi=arr[0];
    int mini=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<maxi<<endl<<mini;

    //int e=maxi-mini;
    //return e;
}
int main() {
    int n;
    int arr[100];
    cin>>n;
    input(arr,n);
    //print(arr,n);
    cout<<endl;
    end(arr,n);
};