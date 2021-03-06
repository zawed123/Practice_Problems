/*
*
*Problem Link : https://atcoder.jp/contests/dp/tasks/dp_k
*Platform: atcoder
*Status: correct
*Author: Mayukh Chakrabarti
*
*/

#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false)
#define boost cin.tie(NULL)
#define booster cout.tie(NULL)
#define endl "\n"
typedef long long int lld;

#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;

using namespace std;

int main(){
	
	int N,K;
	cin>>N>>K;
	
	bool dp[K+1]={0}; //initializing with false
	int ar[N];
	F(ar,N);
	
	sort(ar,ar+N); //sorting in ascending order to improve the time complexity of the algorithm
	
	for(int i=0; i<=K; i++){
		
		for(int j=0; j<N; j++){
			if(ar[j]>i)
				break;
			else
				dp[i]= max( dp[i], !dp[i-ar[j]] );
		}
		
	}
	
	if(dp[K])
		cout<<"First";
	else
		cout<<"Second";
	
	return 0;
}

