#include <iostream>
using namespace std;
 
int main() {
 /*int x;
 x=cin.get(); // takes char value so if you give 1 it will show ascii value of 1
 cout<<x<<endl; // will give ascii of enter,tab and space also

 int a=2;
 int b=a+1;
 if((a=3)==b){
    cout<<a; //goes in this block and a value changed to 3
 }
 else{
    cout<<a+1;
 }
 char ch;
 cin>>ch;
 if(ch>='a' && ch<='z'){
    cout<<"lower";
 }
 else if (ch >= 'A' && ch <= 'Z'){
    cout << "upper";
 }
 else{
    cout<<"numeric";
 }*/

//while loop
 /*int n,i;
 cin>>n;
 i=1;
 while(i<=n)
{
    cout<<i<<" ";
    i+=1;
}*/
 //sum of n num
/*int n,i;
cin>>n;
i=1;
int sum=0;
while(i<=n){
    sum=sum+i;
    i=i+1;
}
cout<<sum;

//sum of all even

int n,i,sum;
i=1;sum=0;
cin>>n;
while(i<=n){
    if(i%2==0)
        sum=sum+i;
}
cout<<sum;

//prime or not
int n,p;
cin>>n;
int i=2;
p=0;
while(i<n){
   if(n%i==0){
      p=p+1;
   }
   i=i+1;
}
   if(p==0){
      cout<<"prime";
   }
   else{
      cout<<"not prime";
   }

//pattern 1

int n;
cin>>n;
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < n; j++)
   {
      cout<<"*";
   }
   cout<<endl;
   
}

//pattern 1 using while
int n,i,j;
cin>>n;
i=0;
while(i<n){
   j=0;
   while(j<n){
      cout<<"*";
      j=j+1;
   }
   cout<<endl;
   i=i+1;
}

//pattern 2

int n,i,j;
cin>>n;
i=1;
while(i<=n){
   int j=1;
   while(j<=n){
      cout<<i;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}

//pattern 2 using for loop

int n;
cin>>n;
for (int i = 1; i <=n; i++)
{
   for (int j = 1; j <=n; j++)
   {
      cout<<i;
   }
   cout<<endl;
}

//pattern 3
int n,i,j;
cin>>n;
i=1;
while(i<=n){
   j=1;
   while(j<=n){
      cout<<j;
      j=j+1;
}
i=i+1;
cout<<endl;
}

//4

int n,i,j;
cin>>n;
i=n;

// or like above and do n-j+1
while(i>0){
   j=n;
   while(j>0){
      cout<<j;
      j=j-1;
   }
   i=i-1;
   cout<<endl;
}

int n,i,j,count;
cin>>n;
i=1;count=1;
while(i<=n){
   j=1;
   while(j<=n){
      cout<<count;
      count=count+1;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}

int n,i,j;
cin>>n;
i=1;
while(i<=n){
   j=1;
   while(j<=i){
      cout<<"*";
      j=j+1;
   }
   i=i+1;
   cout<<endl;

}

int n,i,j;
cin>>n;
i=1;
while(i<=n){
   j=1;
   while(j<=i){
      cout<<i;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}

int n,i,j,count;
cin>>n;
i=1;count=1;
while(i<=n){
   j=1;
   while(j<=i){
      cout<<count;
      count=count+1;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}

int n,i,j;
cin>>n;

i=1;
while(i<=n){
   j=1;
   int val=i;
   while(j<=i){
      cout<<val;
      val=val+1;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}
int n,i,j;
cin>>n;

i=1;
while(i<=n){
   j=i;
   while(j<2*i){
      cout<<j;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}

int n,i,j;
cin>>n;
i=1;
while(i<=n){
   j=1;
   while(j<=i){
      cout<<i-j+1;
      j=j+1;
   }
   i=i+1;
   cout<<endl;
}

int n,i,j,a;
cin>>n;
i=1;a=65;
while(i<=n){
   j=1;
   while(j<=n){
      cout<<char(a);
      j=j+1;
   }
   cout<<endl;
   i=i+1;
   a=a+1;
}

int n,i,j;
cin>>n;
i=1;
while(i<=n){
   j=1;
   while(j<=n){
      cout<<char('A'+i-1);
      j=j+1;
   }
   cout<<endl;
   i=i+1;
}

int n,i,j;
cin>>n;
i=1;
while(i<=n){
   j=1;
   while(j<=n){
      cout<<char('A'+j-1);
      j=j+1;
   }
   cout<<endl;
   i=i+1;
}

int n,i,j,a;
cin>>n;
i=1;a=65;
while(i<=n){
   j=1;
   while(j<=n){
      cout<<char(a);
      j=j+1;
      a=a+1; // 'A'+i+j-2

   }
   cout<<endl;
   i=i+1;
}*/

// try 'A'+i+j-2 with triangle

return 0;
 };