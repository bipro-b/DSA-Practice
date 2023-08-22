#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[],int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum = xorSum^arr[i];
    }
    return xorSum;
}

int findTwoUnique(int arr[],int n){
    int xorSum = 0;
    for(int i=0;i<n;i++){
        xorSum = xorSum^arr[i];
    }
    int setbit =0;
    int pos=0;
    while(setbit!=1){
        setbit = xorSum &1;
        pos++;
        xorSum = xorSum >>1;
    }
    for(int i=0;i<n;i++){
        if()
    }
}


int main() {

    int arr[]={1,2,3,4,1,2,3};
    cout<<findUnique(arr,7);
    
    return 0;
}