#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int temp=0, n=a.size(),i;
    while(k>0){
        temp=a[n-1];
        for(i=n-1;i>0;i--)
            a[i]=a[i-1];
        a[0]=temp;
        k--;
    }
    return a;
}



int main(){
    vector <int> a={-1,2,3,7,9,11};
    vector <int> b=kRotate(a, 5);
    for(auto i: b)
    cout<<i<<" ";
    return 0;
}
