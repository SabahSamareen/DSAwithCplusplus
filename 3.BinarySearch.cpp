#include <iostream>
using namespace std;
int binarySearch(int a[], int n, int element){
    int mid=0, high=0,low=0;
    for(int i=0;i<n;i++){
        mid=(high-low)/2;
        if(a[i]==element)
        return i;
        else if(element>mid)
        low=mid+1;
        else if(element<mid)
        high=mid-1;
    }
    return -1;
}
 int main(){
     int n, a[100],pos=-1, element=0;
     cout<<"enter array size"<<endl;
     cin>>n;
     cout<<"enter "<<n<<" values in ascending"<<endl;
     for(int i=0;i<n;i++)
     cin>>a[i];
     cout<<"enter element to be searched"<<endl;
     cin>>element;
     pos=binarySearch(a,n,element);
     if(pos>=0)
     cout<<"element at position "<<pos;
     else
     cout<<"element not found";
     
 }
