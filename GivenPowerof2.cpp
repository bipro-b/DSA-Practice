#include<bits/stdc++.h>
using namespace std;
bool powerofTwo(int n){

    return (n && !(n&n-1));

}
int main() {
    int n;
    cin>>n;
    cout<<powerofTwo(n);
    return 0;
}

/* 

  4 = 2^2
  8 = 2^3
  1 = 2^0

  left shift

  1<<1 =>2^1*1
  2<<1= 2^1*2 

  right shift

  12>>1 = 12/2*1


 */