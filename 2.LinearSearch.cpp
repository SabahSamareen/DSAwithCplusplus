//brute force method of searching
#include <iostream>
using namespace std;
int linearSearch(int a[], int n, int element){
    for(int i=0;i<n;i++)
    if(a[i]==element)
    return i;
    return -1;
}
 int main(){
     int n, a[100],pos=-1, element=0;
     cout<<"enter array size"<<endl;
     cin>>n;
     cout<<"enter "<<n<<" values"<<endl;
     for(int i=0;i<n;i++)
     cin>>a[i];
     cout<<"enter element to be searched"<<endl;
     cin>>element;
     pos=linearSearch(a,n,element);
     if(pos>=0)
     cout<<"element at position "<<pos;
     else
     cout<<"element not found";
     
 }
