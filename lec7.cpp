#include <iostream>
#include<math.h>
#include<limits.h>
using namespace std;
/*

//reverse integer
int main() {
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        int digit;
        digit=n%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            cout<<"out of range"<<endl;
        }
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<ans;
};
/*The reason for using `INT_MAX/10` and `INT_MIN/10` in the given code is to prevent integer overflow or underflow
 when performing arithmetic operations in the context of reversing an integer.
In the code snippet, the intention is to reverse an input integer by manipulating its digits. The line
 `ans = (ans * 10) + digit;` is where the reverse number is being built digit by digit.
The conditions `(ans > INT_MAX/10)` and `(ans < INT_MIN/10)` are used to check whether the next operation,
 which involves multiplying `ans` by 10 and adding a new digit, would lead to an overflow or underflow situation.
Consider an example where the reversed number is `214748364`. If we attempt to add a digit to this number, the
 next digit in the reversed number can only be 1 (if the next digit in the original number is less than or equal 
 to 7), or else it would exceed the range of `int` in C++.
So, by checking `(ans > INT_MAX/10)` and `(ans < INT_MIN/10)` before the addition operation, the code is 
essentially making sure that after multiplying `ans` by 10, there's enough room within the range of `INT_MAX` 
and `INT_MIN` for the next digit to be added without causing an overflow or underflow.
This preventive measure helps in detecting potential overflow or underflow situations that might occur during 
the process of reversing the integer, allowing the code to handle such cases and avoid erroneous results due 
to integer limits being surpassed.*/

// complement of base 10 integer
/*int main(){
    int n;
    cin>>n;

    int m=n;
    int mask=0;
    
    if(n==0){
        return 1;
    }

    while(m!=0){
        mask=(mask<<1) |1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    cout<< ans;

};*/

