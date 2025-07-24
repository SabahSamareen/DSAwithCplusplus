#include<bits/stdc++.h>
#include <vector>
using namespace std;

int largestElement(vector<int> arr) {
    int largestNumber=INT_MIN;
    for(auto i : arr)
        if(i>largestNumber)
            largestNumber=max(i,largestNumber);
    return largestNumber;
}
