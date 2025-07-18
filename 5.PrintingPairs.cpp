//[1,2,3,4]------>(1,2),(1,3),(1,4),(2,3),(2,4),(3,4)
#include <iostream>
using namespace std;
void printPairs(int a[], int n){
    int i,j;
    cout<<"The pairs are"<<endl;
    for(i=0; i<n-1; i++){
        for(j=i+1;j<n;j++)
            cout<<"("<<a[i]<<","<<a[j]<<") ";
    }
}
 int main(){
     int n, a[100];
     cout<<"enter array size"<<endl;
     cin>>n;
     cout<<"enter "<<n<<" values"<<endl;
     for(int i=0;i<n;i++)
     cin>>a[i];
     printPairs(a,n);
 }
