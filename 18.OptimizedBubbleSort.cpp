#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    int i,j,n=v.size();
    bool swapped;
    for(i=0;i<n-1;i++){
        swapped=false;
        for(j=0;j<=n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
    return v;
}
