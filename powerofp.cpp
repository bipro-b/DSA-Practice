#include<bits/stdc++.h>
using namespace std;

int power(int n,int p){
    if(p==0) return 1;
     return power(n,p-1)*n;

     //power(2,4)
     //power(2,4)=power(2,3)*2
     //power(2,3) = power(2,2)*2
     //power(2,2) = power(2,1)*2
     //power(2,1)=1*2  // for 1 return 1
     //power(2,2)=2*2
     //power(2,3)= 4*2
     //power(2,4)=8*2=16
}
int main() {
    int n,p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}