#include <iostream>
using namespace std;
 int main(){
     int n, a[100];
     //n is array length
     n=10;
     for(int i=0;i<n;i++)
     cin>>a[i];
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
 }


/*
int a[100]={9}; then uninit values equal 9
printarrr(int a[])
...
int a[]={1,2,3,4,5}
printarr(a);

gives unexpected results
it is best to pass size of array along with it
this is because the value passed is the address of the0th element
*/
