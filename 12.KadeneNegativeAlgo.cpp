#include<bits/stdc++.h>
#include <limits>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int current_sum=A[0], max_sum=A[0], n=A.size();
    for(int i=1; i<n; i++){
    current_sum = max(A[i],current_sum+A[i]);
    max_sum= max(current_sum, max_sum);
    }
    return max_sum;
}

int main(){
    vector <int> a={1,2,3,4,5};
    int c=maxSumSubarray(a);
    cout<<c;
}
