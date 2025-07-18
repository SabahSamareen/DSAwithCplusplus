#include <iostream>
using namespace std;
void reverseArray(int a[], int n){
    int i, j;
    for(i=0,j=n-1; i<n/2; i++,j--){
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
        a[i]=a[i]-a[j];
    }
}
 int main(){
     int n, a[100];
     cout<<"enter array size"<<endl;
     cin>>n;
     cout<<"enter "<<n<<" values"<<endl;
     for(int i=0;i<n;i++)
     cin>>a[i];
     cout<<"hello"<<endl;
     reverseArray(a,n);
     cout<<"Reversed Array"<<endl;
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     
 }

//time complexity? n/2 times the loop is played and we ignore the constant part hence O(N)
