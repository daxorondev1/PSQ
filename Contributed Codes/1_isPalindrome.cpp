#include <bits/stdc++.h>
using namespace std;
#define test long long int t; cin>>t; while(t--)
bool isPalindrome(string st, int l, int r)
{
	if(l>=r)
		return true;
	if(st[l]!=st[r])
		return false;

	return isPalindrome(st,l+1,r-1);
}
int main()
{
      #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
      #endif
        // string st1 = "notaba";
        // int n = st1.size();
        // if(isPalindrome(st1,0,n-1))
        // 	cout<<st1<<" is palindrome";
        // else
        // 	cout<<st1<<" is NOT palindrome";
        return 0;
}