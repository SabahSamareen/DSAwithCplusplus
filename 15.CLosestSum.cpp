#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int i=0, j=0, k=0, n=arr.size(), current_sum=0, a=arr[0], b=arr[1];
    for(i=n-1;i>=0;i--){
        if ((x==arr[i]) || (x>arr[i]))
        break;
        if(i==0)
        return {a,b};
    }
    
    if(i==0)
    return {a,b};
    
    else
        j=i;
    for(i=0; i<j; i++){
        for(k=i+1; k<=j; k++){
            if((arr[i]+arr[k])>x)
                return {a,b};
            a=arr[i];
            b=arr[k];
        }
    }
    return{a,b};
}



int main(){
    vector <int> a={-1,2,3,7,9,11};
    pair<int, int> result = closestSum(a, 5);
    cout << result.first << " " << result.second << endl;
    return 0;
}
