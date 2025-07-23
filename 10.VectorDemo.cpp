#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr={1,2,3,4,5};
    //vector size
    cout<<arr.size()<<endl;
    
    //vector capacity defined at initialization
    cout<<arr.capacity()<<endl;
    
    //add a new element then check capacity which should be doubled by the container class happens at memory level
    arr.push_back(15);
    cout<<"new capacity after element added"<<endl;
    cout<<arr.capacity()<<endl;
    
    //print elements
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    
    //remove elements
    arr.pop_back();
    cout<<"newArray after deleting last element"<<endl;
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    
    //new vector where size is 10 and all elements are 7
    //fill constructor
    vector <int> arr1(10,7);
    cout<<"array 1"<<endl;
    for(int i=0;i<arr1.size();i++)
    cout<<arr1[i]<<" ";
    
    return 0;
}
