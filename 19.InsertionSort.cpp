#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> a){
    int n=a.size(), i;
    for(i=1;i<n;i++)
        if(a[i]<a[i-1])
            swap(a[i-1],a[i]);
            
    return a;
}

int main(){
    vector <int> a={6,-2,3,7,9,11};
    vector <int> b=insertionSort(a);
    for(auto i: b)
    cout<<i<<" ";
    return 0;
}

