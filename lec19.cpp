#include <iostream>
#include <array>
#include <vector>


using namespace std;
 
int main() {
    //array
    /*int basic[3]={1,2,3};
    int s=sizeof(basic);
    //cout<<s<<endl;   // size = size*int size

    array<int,4> a = {1,2,3,4};
    int size=a.size();  // og size
    //cout<<size<<endl;

    for(int i=0;i<size;i++){
        //cout<<a[i]<<endl;
    }

    cout<<"element at 2nd index: "<<a.at(2)<<endl;
    cout<<"empty or not: "<<a.empty()<<endl;
    cout<<"first element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;*/

    //vector

    vector<int> v;

    //other way to initialize:
    vector<int> a (5,1);   //5 is the size and all elements will be initialized with 1(default 0)

    vector<int> b(a);  //copied a into b vector

    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(3);  //capacity doubled
    cout<<"Capacity: "<<v.capacity()<<endl;    
    v.push_back(4);
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.push_back(5);  //capacity doubled
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    for(int i:v){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"element at 2nd index: "<<v.at(2)<<endl;
    cout<<"empty or not: "<<v.empty()<<endl;
    cout<<"first element: "<<v.front()<<endl;
    cout<<"last element: "<<v.back()<<endl;

    v.pop_back();

    for(int i:v){
        cout<<i<<endl;
    }

    //while clearing vector size gets 0 and not capacity
    cout<<"size: "<<v.size()<<endl;
    v.clear();
    cout<<"size: "<<v.size()<<endl;

    //iterators??


 
};