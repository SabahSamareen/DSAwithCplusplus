#include <iostream>
using namespace std;
int printLargestSubarraySum(int a[], int n){
    int prefix_sum[100]={0},i=0,j,k,sum=0,sum_elements=0;
    prefix_sum[0]=a[0];
    for(i=1;i<n;i++)
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    for(j=0;j<n;j++){
        sum_elements=0;
        for(k=j;k<n;k++){
            sum_elements= j>0 ? prefix_sum[k] - prefix_sum[j-1] : prefix_sum[k];
            if(sum_elements>sum)
                sum=sum_elements;
        }
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

//O(N+N^2)=O(N^2)
