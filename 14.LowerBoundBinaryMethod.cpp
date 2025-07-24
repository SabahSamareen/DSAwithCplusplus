#include<bits/stdc++.h>
#include <vector>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int n=A.size(), s=0, l=n-1, m=(s+l)/2;
    while(s<=l){
        if(Val==A[m])
        return A[m];
        else if(A[m]<Val)
        s=m+1;
        else if(A[m]>Val)
        l=m-1;
        m=(s+l)/2;
    }
    cout<<m<<endl;
    if(A[m]>Val)
    return A[m-1];
    if(A[m]<Val)
    return A[m];
    return A[n-1];
    
}


int main(){
    vector <int> a={-1,0,1,3,4,40,60,70,80,90};
    int c=lowerBound(a,5);
    cout<<c;
}
