#include<bits/stdc++.h>
using namespace std;

bool searchNumber(vector<vector<int>> &mat,int key){
    int n=mat.size();
    int m = mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(key==mat[i][j]){
                return true;
            }
            else if(mat[i][j]>key){
                j--;
            }
            else{
                i++;
            }
        }
    }
    return false;

}

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
   }
   int key;
   cin>>key;
   
   cout<<searchNumber(mat,key);

    return 0;
}