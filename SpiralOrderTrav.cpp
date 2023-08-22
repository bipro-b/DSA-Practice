#include<bits/stdc++.h>
using namespace std;

void spiralOrderTraverse(int mat[][100],int n,int m){
    int top=0,bottom = n-1,left=0,right=m-1;
    int dir = 0;

    while(top<=bottom && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
               cout<<mat[top][i]<<" ";
            }
            top++;
        }
        else if(dir==1){
            for(int i=top;i<=bottom;i++){
                cout<<mat[i][right]<<" ";
            }
            right--;
        }
        else if(dir==2){
            for(int i=right;i>=left;i--){
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
        }
        else {
            for(int i=bottom;i>=top;i--){
               cout<<mat[i][left]<<" ";
            }
            left++;
        }
        dir = (dir+1)%4;
    }

}

int main() {
    int n,m;
    cin>>n>>m;
    int mat[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    spiralOrderTraverse(mat,n,m);
    
    return 0;
}