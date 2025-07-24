#include <iostream>
#include <vector>
using namespace std;
vector <int> bubbleSort(vector <int> a){
    int i,j,n=a.size();
    for(i=0;i<n-1;i++) //n-1 iterations
    {
        for(j=0;j<n-1-i;j++){ //last element fixed
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    return a;
}
int main() {
    vector <int> a={-2,3,4,-1,5,-12,6,1,3};
    a=bubbleSort(a);
    for(auto i: a){
        cout<<i<<" ";
    }
}
