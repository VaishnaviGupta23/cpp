#include <iostream>
using namespace std;
 

// 1- linear search
bool search(int arr[3][4],int key){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}

// 2- row wise sum
void rowSum(int arr[][3],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

// 3- col wise sum
void colSum(int arr[][3],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}

// 4- largest row sum
int largestRowSum(int arr[][3],int n){
    int l=0;
    int index=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        if(sum>l){
            l=sum;
            index=i;
        }
    }
    return index;
}

// 5 - print like a wave
void printWave(int arr[][4],int n){
    for(int j=0;j<4;j++){
        if(j%2==0){
            int i=0;
            while(i<n){
                cout<<arr[i][j]<<" ";
                i++;
            }
        }
        else{
            int i=n-1;
            while(i>=0){
                cout<<arr[i][j]<<" ";
                i--;
            }
        }
        
    }
}
// 6 - spiral matrix
/*void spiral(int arr[][4],int n){
    int a=0;
    int b=0;
    int c=n-1;
    int d=3;

    int i=0;
    int total=n*4;

    while(i<total){

    for(int j=a;j<=d;j++){
        cout<<arr[i][j];
        i++;
    }

    for(int j=;j<=n;j++){
        cout<<arr[i+1][j];
    }
    // j=3 and i=2 rn
    for(j;j>=0;j--){
        cout<<arr[i][j-1];
    }
    // j=0 rn and i=2
    for(i;i>0;i--){
        cout<<arr[i-1][j];
    }
    j++;
    }   
}*/

// 8 - search in 2D matrix (one way)
void search(int arr[][4],int n,int key){
    int row=0;
    for(int i=0;i<n;i++){
        if(key>arr[i][0] && key<arr[i][3]){
            row=i;
            break;
        }
    }
    for(int i=0;i<4;i++){
        if(arr[row][i]==key){
            cout<<"present at row: "<<row<<"and col: "<<i;
    } 
}
}

// 8 - binary search bhaiya



int main() {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n][4];  //have to give col
    
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    /*int key;
    cin>>key;
    if(search(arr,key)==1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }*/

    //spiral(arr,n);
    //cout<<"no of rows:"<<endl;
    //cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    //cout<<"no of cols:"<<endl;
    //cout<<sizeof(arr[0])/sizeof(int);
    //cout<<endl;
    //cout<<arr[0];

    int key;
    cin>>key;
    cout<<endl;
    
    search(arr,n,key);
 
};