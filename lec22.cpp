#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <cctype>
#include <cstring>

using namespace std;

//1st ques
int getLength(char a[]){
    int c=0;
    for(int i=0;a[i]!='\0';i++){
            c++;
    }
    return c;
}

//2nd ques
void rev(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(ch[i++],ch[j--]);
    }
}
//3rd question
bool palindrome(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(tolower(ch[i])==tolower(ch[j])){
            i++;j--;
        }
        else{
            return false;
        }
    }
    return true;
}
// or we can make a fxn to lower case
//tolower not working for strings
char lower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';   //pehle dekho ki kitna aage h A se aur usme a add krdo
        return temp;
    }
}

//4th ques valid palindrome
    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }  
        int i=0;
        int j=temp.length()-1;  // TC and SC = O(n)
        while(i<=j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

//another method with SC=O(1)
bool isPalindrome1(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start]))
                start++; 
                continue;
           if(!isalnum(s[end]))
                end--;
                continue;
           if(tolower(s[start])!=tolower(s[end]))
                return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}

//6th ques--maxm occuring char

char maxOccurringChar(string str){
    int arr[26]={0};

    for(int i=0;i<str.length();i++){
        int index=str[i]-'a';
        arr[index]++;
    }

    int maxm=0;
    int ansIndex=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxm){
            maxm=arr[i];
            ansIndex=i;
        }
    }
    return ansIndex+'a';

}

//ques 7-SC=O(1)
void replaceSpaces(string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            c++;
        }
    }
    int newL=s.length()+(2*c);
    for(int i=0;i<newL;i++){
        if(s[i]==' '){
            s[i]='@';
            s[i+1]='4';
            s[i+2]='0';
        }
    }
}

//9th ques
class Solution {
private:
    //check if all the count in both arrays is equal 
    bool checkEqual(int arr1[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i])
                return 0;
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();

        //count array for s1
        int arr1[26]={0};
        for(int i=0;i<n;i++){
            int index=s1[i]-'a';
            arr1[index]++;
        }

        int x=0;
        int arr2[26]={0};
        while(x<n && x<m){
            int index=s2[x]-'a';
            arr2[index]++;
            x++;
        }
        
        if(checkEqual(arr1,arr2))
            return 1;

        while(x<m){
            int index=s2[x]-'a';
            arr2[index]++;

            index=s2[x-n]-'a';
            arr2[index]--;

            x++;

            if(checkEqual(arr1,arr2))
                return 1;
        }
        return 0;
    }
};



int main(){
    //char ch[20];
    //cin>>ch;
    //cout<<ch<<endl;
    //cout<<ch[4]<<endl;  // no output but is getting executed
    //cout<<"hello"<<endl;
    /*for(int i=0;i<20;i++){
        cout<<ch[i]<<" ";   // shows the garbage values
    }*/


    //won't pick up after spaces as it considers as 
    //null character while printing so for my full name it will only take 1st name
    //cin>>ch;
    //cout<<ch<<endl;
    /*for(int i=0;i<20;i++){
        cout<<ch[i]<<" ";   } */ 


    /*int n=getLength(ch);
    //rev(ch,n);
    cout<<ch<<endl;
    bool b=palindrome(ch,n);
    cout<<b;*/


    //string

    /*string s; //dont have to mention the size
    string str="babbar"; //memory me same as char array
    cout<<str.length()<<endl;
    //cout<<str[6]<<endl<<str[0]<<endl<<str[4]<<endl<<str[20]<<endl<<str[1];
    // str[6] and str[20] no error and no output
    // rest normal
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<20;i++){
        cout<<str[i]<<" ";  //garbage comes
    }
    cout<<endl;
    str.push_back('a');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;*/

    //difference b/w char array and string

    //char ch[20];
    //cin>>ch;   //if I give V G it will take V as ch and G as str
    //cout<<ch<<endl;
    //string str;
    //cin>>str;
    //cout<<str<<endl;  //it also doesnt take spaces


    //char ch[20]="Love Babbar";  //no prob
    //string str="Love Babbar";  //no prob 
    //bs cin me prob hoti h
    //cout<<ch<<endl<<str;

    /*char ch[20];
    cin>>ch;   //abcd
    cout<<ch<<endl;
    ch[2]='\0';
    cout<<ch<<endl;  //ab
    ch[5]='\0';
    cout<<ch<<endl;  //ab
    for(int i=0;i<20;i++){
        cout<<ch[i]<<" ";
    }*/

    string str="Hello Ram";
    replaceSpaces(str);
    cout<<str;
    //cout<<maxOccurringChar(str);
    /*cout<<str<<endl;  //abcd
    str[2]='\0';
    cout<<str<<endl;  //abd
    str[5]='\0';
    cout<<str<<endl;  //abd
    for(int i=0;i<20;i++){
        cout<<str[i]<<" ";
    }*/



}