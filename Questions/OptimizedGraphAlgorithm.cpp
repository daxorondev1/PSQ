#include <bits/stdc++.h>
#define test long long int t; cin>>t; while(t--)
using namespace std;
int main()
{
    //InputOutput
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Testcases
    test{
        long long int n,m;
        cin>>n>>m;
        string st;
        cin>>st;
        long long int arr[n+2];
        for(long long int j=0; j<n; j++)
            {
                arr[j+1]=st[j];
                arr[j+1]-=48;
            }
        arr[0]=-1;
        arr[n+1]=-1;   
        while(m--)
        {
           for(long long int i=1; i<=n; i++)
               if(arr[i]==0)
               {
                    if((arr[i+1]==1)&&((arr[i-1]==0)||(arr[i-1]==-1)||arr[i-1]==3))
                        arr[i]=3;
                    if(arr[i+1]==0&&arr[i-1]==1)
                            arr[i]=3;
               }
           for(long long int i=1; i<=n; i++)
                if(arr[i]==3)
                    arr[i]=1;
        }
        for(long long int i=1; i<=n; i++)
            cout<<arr[i];
        cout<<"\n";
    }
    return 0;
}
