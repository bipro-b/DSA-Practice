#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i*2+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	int k=1;
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<k;j++){
			cout<<"  ";
		}
		k++;
		for(int j=1;j<=i*2+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	

   return 0;
}

