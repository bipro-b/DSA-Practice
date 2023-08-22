#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    char arr[n];
    cin.getline(arr,n);
    // cin.ignore();
    int i=0;
    int curr=0;int maxLen = 0;
    int st=0,maxSt=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(curr>maxLen){
                maxLen=curr;
                maxSt=st;
            }
            curr =0;
            st=i+1;
        }
        else {
            curr++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<maxLen<<endl;
    cout<<maxSt<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxSt];
    }

    
    return 0;
}