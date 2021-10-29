#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
long long a[N];
long long dp[N];
int main(){
	long long n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		long long tmp;
		scanf("%lld",&tmp);
		a[i]=tmp-k;
	}
	dp[0]=a[0];
	for(int i=1;i<n;i++)
	dp[i]=max(a[i],dp[i-1]+a[i]);
	int index=0;
	for(int i=1;i<n;i++)
		if(dp[i]>dp[index])
			index=i;
	if(dp[index]<0)
	cout<<0<<endl;
	else  
	cout<<dp[index]<<endl;
	 
	
}
