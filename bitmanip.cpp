#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int setBit(int n,int pos){
    return (n|(1<<pos));
}

int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return (n&mask);
}
int UpdateBit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n|(value<<pos)); 
}
int main() {
    int n=5;
    int pos=2;
    // cout<<getBit(n,pos);
    // cout<<clearBit(n,pos);
    cout<<UpdateBit(5,1,1);
    return 0;
}
/* 
pos=1
1011 & 10
=101
pos =2
1011 & 100
0
pos = 3
1011 & 1000
1000

 */