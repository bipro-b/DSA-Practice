#include<bits/stdc++.h>
using namespace std;

int setBit(int n,int pos){
    return (n|(1<<pos));
}

int main() {
    int n;
    int pos;
    cin>>n>>pos;
    cout<<setBit(n,pos);
    return 0;
}