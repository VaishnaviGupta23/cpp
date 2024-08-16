#include <iostream>
using namespace std;
 

int factorial(int n){
    int fact=1;
    if(n>0){
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
    else if(n==0){
        return 1;
    }
    else{
        cout<<"enter valid number";
    }
}

int ncr(int n,int r){
    int ans;
    ans=factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}

bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int ap(int n){
    int n_term=(3*n) + 7 ; 
    return n_term;
}

int num_of_set_bits(int a){
    int bit=0;
    while(a!=0){
        if(a&1)
            bit++;
        a=a>>1;
    }
    return bit;
}
void fib(int n,int term){
    int a=0;
    int b=1;
    int next=0;
    //cout<<a<<" "<<b<<" ";
    if(term==1){
        cout<<a;
    }
    if(term==2){
        cout<<b;
    }
    for(int i=0;i<n-2;i++){
        next=a+b;
        a=b;
        b=next;
        if((i+3)==term){
            cout<<next;
        }
    }

    return ;
}

void print(int num){
    num+=1; //doesn't affect the og value of n
    cout<<num<<endl;
}



int main(){
    int n;
    cin>>n;
    //int term;
    //cin>>term;
    //cout<<num_of_set_bits(n);
    //cout<<num_of_set_bits(a)+num_of_set_bits(b);
    //fib(n,term);

    print(n);
    cout<<n;
}

    /*int num=2;
    while(1){
        switch(num){
        case 1: cout<<"first"<<endl;

        case 2: cout<<"second"<<endl;
        continue;   //inifinte loop
        exit(0);

        default: cout<<"default"<<endl;
        exit(0);
    }
    }



    int n;
    cin>>n;
  

    int a,b,c,d;
    switch(1){
        case 1:
            a=n/100;
            cout<<"no of 100s "<<a<<endl;
            n=n-(a*100);
        case 2:
            b=n/50;
            cout<<"no of 50s "<<b<<endl;
            n=n-(b*50);
        case 3:
            c=n/20;
            cout<<"no of 20s "<<c<<endl;
            n=n-(c*20);
        case 4: 
            d=n/10;
            cout<<"no of 10s "<<d<<endl;
            n=n-(d*10);
        default:
            cout<<"default";
    }*/