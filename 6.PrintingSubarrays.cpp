#include <iostream>
using namespace std;
void printSubarrays(int a[], int n){
    int i=0,j,k;
    cout<<"The subarrays are"<<endl;
    for(i; i<n; i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++)
                cout<<a[k]<<", ";
            cout<<endl;
        }
        cout<<endl;
    }
}
 int main(){
     
     int n, a[100];
     cout<<"enter array size"<<endl;
     cin>>n;
     cout<<"enter "<<n<<" values"<<endl;
     for(int i=0;i<n;i++)
     cin>>a[i];
     printSubarrays(a,n);
 }
