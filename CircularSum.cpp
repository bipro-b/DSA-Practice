#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int curr=0;
    int maxSum = INT_MIN;

    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr<0){
            curr=0;
        }
        maxSum=max(curr,maxSum);
    }
    return maxSum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr,n);

    int totalSum=0;

    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapSum = totalSum + kadane(arr,n);

    cout<<max(wrapSum,nonWrapSum);
    return 0;
}