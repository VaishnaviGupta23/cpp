#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //decimal to binary
    int n;    //if we take big num it will not work as int has a range
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Answer is "<< ans << endl;

    //neg decimal to binary--do this
    /*int n;
    cin>>n;
    int ans=0;*/

    //binary to decimal
    /*int n;
    cin>>n;
    int i=0,ans=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;*/

    return 0;
}
