#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    vector <int> a={6,-2,3,7,9,11};
    int n=a.size();
    cout<<a.end();
    sort(a.begin(),a.end());
    for(auto i: a)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}
