//brute force method as we go through all combinations to check O(N^3)
#include <iostream>
using namespace std;
int printLargestSubarraySum(int a[], int n){
    int i=0,j,k,sum=0,sum_elements=0;
    for(i; i<n; i++){
        for(j=i;j<n;j++){
            sum_elements=0;
            for(k=i;k<=j;k++){
                sum_elements+=a[k];
            }
            if (sum_elements>sum)
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
