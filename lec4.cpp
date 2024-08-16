#include <iostream>
using namespace std;
 
int main() {
    int n,i,j;
    cin>>n;
    
    /*while(i<=n){
        j=n-i;
        while(j){
            cout<<" ";
            j--;
        }
        j=1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
     
    while(i<=n){

        j=n-i;
        while (j){
            cout<<" ";
            j--;
        }

        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        j=i-1;
        while(j){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }*/

    i=1;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        j=i-1;
        while(j>0){
            cout<<"*";
            j--;
        }
        j=1;
        while(j<i){
            cout<<"*";
            j++;
        }

        j=1;
        while(j<=n-i+1){
            cout<<n-i-j+2;
            j++;
        }

        i++;
        cout<<endl;
    }
     
};