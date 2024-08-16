#include <iostream>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;


void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void printVector(vector<int> v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> wholeReverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> quesReverse(vector<int> v,int m){
    int s=m+1;
    int e=(v.size()-1);
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }

}

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr2[j]<arr1[i]){
            arr3[k++]=arr2[j++];            
        }
        else{
            arr3[k++]=arr1[i++];
        } 
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr1[j++];
    }
}

void moveZeroes(int arr[],int n){
    int i=0;  // if 0 then ignore if non zero swap
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}

int main() {
    /*vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    //vector<int> ans = quesReverse(v,3);
    //print(ans);*/

    /*int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};

    int arr3[9]={0};

    merge(arr1,5,arr2,4,arr3);
    print(arr3,9);*/

    int arr[6]={0,1,0,3,12,0};
    moveZeroes(arr,6);
    print(arr,6);
    return 0;
    
};