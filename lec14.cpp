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
// pivot in sorted and rotated array
int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }    
        mid=s+(e-s)/2;
    }
    return s; // this could be return e also
}

//sqrt of a num

long long int floorSqrt(int n)
{
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        else if(sq>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n,int p,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<p;i++){
        factor=factor/10;
        /*for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }*/
        double j=ans;
        while(j*j<n){
            ans=j;
            j=j+factor;
        }
    }
    return ans;
}

int main() {
    //int arr[5]={7,9,1,2,3};
    //cout<<"pivot is "<<getPivot(arr,5)<<endl;
    //cout<<"hello";
    /*int a[100];
    int n;
    cout<<"input size"<<endl;
    cin>>n;
    input(a,n);
    cout<<"the array is"<<endl;
    print(a,n);
    cout<<endl;
    cout<<"the pivot is"<<endl;
    cout<<getPivot(a,n);*/

    int n;
    cin>>n;
    int p;
    cin>>p;
    //int sq=floorSqrt(n);
    //cout<<sq;
    int temp=floorSqrt(n);
    double ans=morePrecision(n,p,temp);
    cout<<ans;
    
};