#include<bits/stdc++.h>
using namespace std;


int RecordBreaker(int arr[],int n){

    int mx=-1;
    int count=0;
    arr[n]=-1;
    for(int i=0;i<n;i++){
      if(arr[i]>mx && arr[i]>arr[i+1]){
        count++;
      }
      mx = max(mx,arr[i]);
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i>n;i++){
        cin>>arr[i];
    }
    cout<<RecordBreaker(arr,n);
    
    return 0;
}