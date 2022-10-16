#include <bits/stdc++.h>
using namespace std;
#define test long long int t; cin>>t; while(t--)

//Recursion + Memoization = DP -> answer ko return karne se pehle store karlena, so that dobara calculate na karna pde.


//TopDown Approach -> Recursive Approach -> Recursion + Memoization -> Recursive Stack
//BottomUp Approach - > Iterative Approach - NO Recursive Stack
//If You cannot be greedy then explore all options.
//greedy -> min(x,y,z);
int TopDown(int n, int*dp)
{
	if(n<=1)
		return dp[n] = n;
	if(dp[n]!=-1)
		return dp[n];
	return dp[n] = TopDown(n-1,dp)+TopDown(n-2,dp);
}
int BottomUp(int n)
{
	vector<int> dp(n+1);
	dp[0] = 0;
	dp[1] = 1;

	for(int i = 2; i<=n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}
int fibonacci(int n)
{
	int a,b,c;
	a=0;
	b=1;
	for(int i = 0; i<=n-2; i++)
	{
		c = a+b;
		a=b;
		b=c;
	}
	return c;
}
int main()
{
      #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
      #endif
       
       int n;
       cin>>n;

       int dp[1000];

       memset(dp,-1,sizeof(dp));

       cout<<TopDown(n,dp)<<" ";
       cout<<BottomUp(n)<<" ";
       cout<<fibonacci(n);

        return 0;
}