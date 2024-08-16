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
int max(int a[],int size){
    int max=a[0]; //can also use INT_MIN
    for(int i=0;i<size;i++){
        if(a[i]>max){  //can also use max fxn
            max=a[i];
        }
    }
    return max;
}

int min(int a[],int size){
    int min=a[0]; //can also use INT_MAX
    for(int i=0;i<size;i++){
        if(a[i]<min){  //can also use min fxn
            min=a[i];
        }
    }
    return min;
}

int update(int a[]){
    a[0]=20;
}

int sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int linear_search(int arr[],int n,int find){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==find){
            return i;
        }
    }
    
}

void prints_reverse(int arr[],int n){

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return ;
}

void actual_reverse(int arr[],int n){
    int rev[n];
    for(int i=0;i<n;i++){
        rev[i]=arr[n-i-1];
        cout<<rev[i];
    }
    return ;
}

void rev_anothermethod(int arr[],int n){
    int end=n-1;
    int start=0;
    //int rev[n];
    while(start<=end){  //swapping
        //int temp=arr[start];
        //rev[start]=arr[end];
        //rev[end]=temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //for(int i=0;i<n;i++){
       // cout<<arr[i]<<" ";
    //}
}
int main() {
    /*int a[15];
    cout<<a[0]; //garbage value
    cout<<a[20]; //garbage or out of range error*/

    /*int a[100]; //better practice than using variable size
    int n;
    cin>>n;
    if(n <= 100 && n >= 0){
        input(a,n);
        print(a,n);
    }
    else{
        cout<<"array size overflow!";
    }
    cout<<endl<<max(a,n)<<endl<<min(a,n);*/

    /*int arr[3]={1,2,3};
    update(arr);
    print(arr,3);
    arr[1]=9;
    cout<<endl;
    print(arr,3);*/

    /*int arr[100];
    int n;
    cin>>n;
    input(arr,n);
    print(arr,n);
    cout<<sum(arr,n);*/

    int arr[100];
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    input(arr,n);
    cout<<"elements are : "<<endl;
    print(arr,n);
    /*int find;
    cout<<"enter the element to be searched"<<endl;
    cin>>find;
    int index=linear_search(arr,n,find);
    cout<<"element found at "<<index<<" index"<<endl;*/
    cout<<endl;

    //prints_reverse(arr,n);

    //actual_reverse(arr,n);

    rev_anothermethod(arr,n);
    print(arr,n);

    return 0;
};