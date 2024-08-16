#include <iostream>
using namespace std;
 
int main() {
    /*int x=2;
    cout<<~x<<endl; //its not -2....do bit wala kaam

    int a=2;
    int b=3;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;

    int y=5;
    int z=3<<2;
    cout<<z;

    int c=5>>2;
    cout<<c;
    int i=1;
    for(;;){
        if(i<=5){
            cout<<i<<" ";
        }
        else{
            break;
        }
        i++;
    }
    for(int a=0,b=1;a>=0 && b>=1;a--,b--){
        cout<<a<<" "<<b<<endl;
    }

    //fibonacci

    int a=0;
    int b=1;
    int n;
    cin>>n;
    cout<<a<<endl<<b<<endl;
    int sum;
    for(int x=1;x<=n-2;x++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }

    //prime

    int n;
    cin>>n;
    int check;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    

    //continue use
    for (int i = 0; i < 5; i++)
    {
        cout<<"hi"<<endl;
        continue;
        cout<<"bye"<<endl; //bye doesn't gets printed,but the loop is not broken,it continues
    }
    cout<<"buddhu";

    for (int i = 0; i <=5; i++)
    {
        cout<<i<<" ";
        i++; // acts like i=i+2
    }

    for (int i = 0; i <=5; i--)
    {
        cout<<i<<" ";
        i++; //infinite loop of 0
    }

    for (int i = 0; i <=15; i+=2)
    {
        cout<<i<<" ";
        if(i&1){
            continue; 
        }
        i++;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i <=5; j++)
        {
            cout<<i<<" "<<j<<endl; //infinite
        }
    }

    //1281. Subtract the Product and Sum of Digits of an Integer
    int n,sum,prd;
    cin>>n;
    sum=0;
    prd=1;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        sum=sum+digit;
        prd=prd*digit;
    }
    cout<<prd-sum;*/

    // 191. Number of 1 Bits

    //method 1=convert to binary and then count
    //method 2=consider the last bit and right shift
    
    unsigned int n;
    cin>>n;
    int c=0;
    while(n!=0){
            //checking last bit
            if(n&1){
                c++;
            }
            n=n>>1;
        }
        cout<< c;
        return 0;
};


