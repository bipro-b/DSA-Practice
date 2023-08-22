#include<bits/stdc++.h>
using namespace std;

int nthFibonacci(int n){

   if(n<2) return n;
    // 0 1 1 2 3 5 8

    return nthFibonacci(n-2) + nthFibonacci(n-1);

}

int main() {
    int n;cin>>n;
    cout<<nthFibonacci(n);
    return 0;
}