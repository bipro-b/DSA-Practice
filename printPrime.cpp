#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
	
	if(x<=1){
		return false;
	}
	
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return false;
			break;
		}
	}
	return true;
	
}
int main()
{
	int x,y;
	cin>>x>>y;
	int count=0;
	for(int i=x;i<=y;i++){
		if(isPrime(i)){
			cout<<i<<" ";
			count++;
		}
	}
	cout<<endl;
	cout<<count;

   return 0;
}

