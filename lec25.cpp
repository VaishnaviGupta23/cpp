#include <iostream>
using namespace std;
 
int main() {
    int num=5;
    cout<<num<<endl;
    cout<<&num<<endl;
    int *ptr=&num;
    cout<<ptr<<endl; //gives value of the variable
    cout<<*ptr<<endl; //gives address of the num variable
    double d=4.3;
    double *p2=&d;

    cout<<p2<<endl; //gives value of the variable
    cout<<*p2<<endl; //gives address of the num variable

    cout<<sizeof(num)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(p2)<<endl;
};