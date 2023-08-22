#include<bits/stdc++.h>
using namespace std;


bool checkSort(int arr[],int n){

    if(n==1) return true;
    return (*arr<*(arr+1) && checkSort(arr+1,n-1));

     // 1 2 3 4 , 4
     //  check(arr,4) = 1<2 && check(arr,3) == true
     // check(arr,3) = 2<3 && check(arr,2)
     // check(arr,2) = 3<4 && check(arr,1)
     // check(arr,1) =  return true = true
     // check(arr,2) = true and true = true
     // check(arr,3) = true and true = true
     // check (arr,4) = true and true = true

}
int main() {

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<checkSort(arr,n);
    
    
    return 0;
}