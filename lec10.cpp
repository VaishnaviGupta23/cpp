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

//swap alternate elements
void swap_alt(int arr[],int n){
    int i=0;
    for(int x=0;x<n/2;x++){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
}
void swap_anothermethod(int a[],int n){
    for(int i=0;i<=n;i+=2){
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
    }
}

//find unique element in array
void unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];  //XOR
    }
    cout<<ans;     
}

//unique no of occurences  to do
bool un(int arr[],int n){ 
    int freq[n+1];
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                freq[i-1]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if(i==j || freq[i]==0){
                continue;
            }
            if(freq[i]==freq[j]){
                return false;
            }
        }
    }
    return true;
    
}

//duplicate in array
int dup(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
}
// find all duplicates in an array -- TO DO

// intersection of two arrays
void intersection(int a[],int b[],int n,int m){
    int i=0;int j=0;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i]==b[j]){
            cout<<a[i];
            i++;j++ ;
        }
        else{
            j++ ;
        }
    }
}
void pairsum(int arr[],int n,int sum){  //finds only 1 pair i.e the first one occuring
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1]==sum){
            cout<<arr[i]<<" "<<arr[i+1];
        }
    }
 }

 void pairsum1(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" "<<arr[j];
                cout<<endl;
            }
        }
    }
 }

 void tripletsum(int arr[],int n,int sum){  // to do
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    cout<<endl;
                }
            }
        }
    }
 }

//sort 0 1
void sort01(int arr[],int n){
    int i=0;int j=n-1;
    while(i<j){
        if(arr[i]==0 && i<j){
            i++;
        }
        if(arr[j]==1 && i<j){
            j--;
        }
        if(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}




int main() {
    int arr[100];
    int n;
    cin>>n;
    //int sum;
    //cin>>sum;
    input(arr,n);
    cout<<endl;
    //print(arr,n);
    //swap_alt(arr,n);
    //swap_anothermethod(arr,n);
    //unique(arr,n);
    //bool b=un(arr,n);
    //cout<<b;
    //int d=dup(arr,n);
    //cout<<d;
    //intersection(a,b,n,m);
    //pairsum1(a,n,sum);
    //tripletsum(a,n,sum);
    //sort01(arr,n);

    bool res=un(arr,n);
    if(res){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

};