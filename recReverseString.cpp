#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    // string ros = s.substr(1);
    reverse(s.substr(1));
    cout<<s[0];
    
    // Explanation for reverse("bipro"):
    // reverse("ipro"):
    //     reverse("pro"):
    //         reverse("ro"):
    //             reverse("o"):
    //                 reverse(""):
    //                     return
    //                 print 'o'
    //             print 'r'
    //         print 'p'
    //     print 'i'
    // print 'b'
}


int main() {
    
    string s;
    cin>>s;
    reverse(s);
    return 0;
}