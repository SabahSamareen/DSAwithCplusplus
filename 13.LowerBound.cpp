#include<bits/stdc++.h>
#include <vector>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int n=A.size();
    if (A[0]==Val)
    return Val;
    if(A[0]>Val)
    return -1;
    for(int i=0; i<n; i++){
        if(A[i]==Val)
        return Val;
        else if(A[i]>Val)
        return A[i-1];
    }
    return A[n-1];
}


int main(){
    vector <int> a={-1,0,1,3,4};
    int c=lowerBound(a,5);
    cout<<c;
}
