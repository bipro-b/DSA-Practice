#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[], int n){
    int curr=0;
    int MaxSum = INT_MIN;

    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr<0){
            curr=0;
        }
        MaxSum = max(MaxSum,curr);
    }
    return MaxSum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<MaxSumSubArray(arr,n);
    return 0;
}