#include<bits/stdc++.h>
using namespace std;

int SPF(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(j==n){
                    return i;
                }
            }
        }
    }
    return -1;
}

int main() {
    int n;cin>>n;
    cout<<SPF(n);
    return 0;
}