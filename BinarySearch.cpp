#include<bits/stdc++.h>
using namespace std;

int binarySearch(int n, int arr[], int key){

    int left = 0;
    int right = n;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            right = mid-1;
        }else {
            left = mid+1;
        }
    }

    return -1;

}

int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(n,arr,key);
    
    return 0;
}