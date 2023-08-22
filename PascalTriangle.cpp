
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int f=1;
	for(int i=2;i<=n;i++){
		f=f*i;
	}
	return f;	
}
void pascal(int n){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			int p;
			p=fact(i)/(fact(j)*fact(i-j));
			cout<<p<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	pascal(n);

   return 0;
}

