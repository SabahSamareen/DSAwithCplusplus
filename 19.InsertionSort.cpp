#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> a){
    int n=a.size(), i, j;
    for(i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(a[i]<a[j])
                swap(a[i],a[j]);
        }
    }
            
    return a;
}

int main(){
    vector <int> a={6,-2,3,7,9,11};
    vector <int> b=insertionSort(a);
    for(auto i: b)
    cout<<i<<" ";
    return 0;
}
