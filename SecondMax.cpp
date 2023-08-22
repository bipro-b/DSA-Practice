#include<bits/stdc++.h>
using namespace std;

int secondMax(int arr[],int n){

    int max = INT_MIN;
    int secondMax=INT_MIN;

    for(int i=0;i<n;i++){
       if(arr[i]>max){
        max= arr[i];
       }
       if(arr[i]<max && arr[i]>secondMax){
        secondMax=arr[i];

       }
    }
    return secondMax;
}

int maxOrder(int arr[],int n){
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
            mx = max(mx,arr[i]);
            cout<<mx<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<secondMax(arr,n);
    maxOrder(arr,n);
    return 0;
}