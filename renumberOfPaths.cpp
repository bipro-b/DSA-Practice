#include<bits/stdc++.h>
using namespace std;

int pathsNumber(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count =0;
    for(int i=1;i<=6;i++){
        count+= pathsNumber(s+i,e);
    }
    return count;
        // Explanation for pathsNumber(0, 3):
        // pathsNumber(1, 3):
        //     pathsNumber(2, 3):
        //         pathsNumber(3, 3):
        //             return 1
        //         return 1
        //     return 2
        // pathsNumber(2, 3):
        //     pathsNumber(3, 3):
        //         return 1
        //     return 1
        // pathsNumber(3, 3):
        //     return 1
        // return 3

}
int main() {

    cout<<pathsNumber(0,3);
    
    return 0;
}