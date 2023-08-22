#include<bits/stdc++.h>
using namespace std;

void transposeMat(int mat[100][100],int n,int m){
      int transMat[m][n];

      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transMat[i][j] = mat[j][i];
        }
      }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transMat[i][j]<<" ";
        }
        cout<<endl;
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
    transposeMat(mat,n,m);
    
    return 0;
}
