#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> a){
    int n=a.size(), i, j, pos=0;
    for(i=0;i<n-1;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[pos])
            pos=j;
        }
        swap(a[pos],a[i]);
    }
            
    return a;
}

int main(){
    vector <int> a={6,-2,3,7,9,11};
    vector <int> b=selectionSort(a);
    for(auto i: b)
    cout<<i<<" ";
    return 0;
}
