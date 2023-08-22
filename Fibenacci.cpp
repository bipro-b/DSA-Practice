#include<bits/stdc++.h>
using namespace std;

void fiboNacci(int n){
	int t1=0;
	int t2=1;
	int next;
	for(int i=1;i<=n;i++){ // 0 1 1 2 3 5
		cout<<t1<<" ";
		next=t1+t2;
		t1=t2;
		t2=next;
	}		
}
void fiboNumber(int n){
int a = 0;
  int b = 1;
  int c;

  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }

  cout<<a;
}
int main()
{
	int n;
	cin>>n;
	fiboNacci(n);
	cout<<endl;
	fiboNumber(n);

   return 0;
}

