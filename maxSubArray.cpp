#include<bits/stdc++.h>
using namespace std;

void maxSubArray(int arr[],int n){
    int k=0;
    while(k<n){
      for(int i=k;i<=n;i++){
        for(int j=k;j<i;j++){
             cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    k++;
    }
}

int main() {

    int n;cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    maxSubArray(arr,n);

    
    return 0;
}