#include <iostream>
using namespace std;
int printLargestSubarraySum(int a[], int n){
    int prefix_sum[100]={0},i=0,j,k,sum=0,sum_elements=0;
    prefix_sum[0]= a[0] > 0 ? a[0] : 0;
    
    for(i=1;i<n;i++)
        prefix_sum[i]=prefix_sum[i-1]+a[i] >= 0 ? prefix_sum[i-1]+a[i]: 0;
        
    for(j=0;j<n;j++){
        if(prefix_sum[j]>sum)
            sum=prefix_sum[j];
        continue;
    }
    return sum;
}
int main(){
     int n, a[100],sum=0;
     cout<<"enter array size"<<endl;
     cin>>n;
     cout<<"enter "<<n<<" values"<<endl;
     for(int i=0;i<n;i++)
     cin>>a[i];
     sum=printLargestSubarraySum(a,n);
     cout<<"largest sum is: "<<sum;
 }


O(N)
