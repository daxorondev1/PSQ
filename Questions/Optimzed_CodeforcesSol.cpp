#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    test
    {
        long long int n,l,r;
		cin>>n>>l>>r;
		long long int arr[n];
        for(long long int i=0; i<n; i++)
            cin>>arr[i];
        long long int count=0;
        for(long long int i=0; i<n; i++)
        {
            for(long long int j=i+1; j<n; j++)
            {
                if((arr[i]+arr[j]>=l)&&arr[i]+arr[j]<=r)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
