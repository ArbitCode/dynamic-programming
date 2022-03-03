#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[10009];
ll fib(int n){
	dp[0]=0, dp[1]=1;
	for(int i=2; i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
	return dp[n];
}
int main(){
	int n; cin>>n;
	cout<<n<<"th fibonacci = "<<fib(n);
	return 0;
}