#include<bits/stdc++.h>
using namespace std;

void dec(int n){

    if(n==0) return;
    
    cout<<n<<endl;
    dec(n-1);

    // Explanation for dec(5):
    // print 5
    // dec(4):
    //     print 4
    //     dec(3):
    //         print 3
    //         dec(2):
    //             print 2
    //             dec(1):
    //                 print 1
    //                 dec(0):
    //                     return
}
void inc(int n){
    if(n==0) return;
    inc(n-1);
    cout<<n<<endl;

    /// inc(5) = inc(4)
    // inc(4) = inc(3)
    // inc(3) = inc(2)
    // inc(2) = inc(1)
    //inc(1) = inc(0)
    // inc(0) = return
    //inc(1) = return
      // Explanation for inc(5):
    // inc(4):
    //     inc(3):
    //         inc(2):
    //             inc(1):
    //                 inc(0):
    //                     return
    //                 print 1
    //             print 2
    //         print 3
    //     print 4
    // print 5
}

int main() {
    
    int n;
    cin>>n;
    dec(n);
    inc(n);
    return 0;
}