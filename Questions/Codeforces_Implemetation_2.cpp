/*
  _____     ____      __ __    _____    _____     _____    ____   _    
 |     \   |    \     \ ` /   /     \  |     |   /     \  |    \ | |   
 |      \  |     \    /   \   |     |  |     \   |     |  |     \| |   
 |______/  |__|\__\  /__/\_\  \_____/  |__|\__\  \_____/  |__/\____|
*/
#include <bits/stdc++.h>
#define test long long int t; cin >> t; while (t--)
using namespace std;

void solve()
{
  long long int a,b;
  cin>>a>>b;

  long long int ans = a/b;

  if(a%b!=0)
  {
  ans = b*(ans+1);

  ans = ans-a;

  cout<<ans<<"\n";
  }
  else
    cout<<0<<"\n";

}

int main(){
  //ForLocalIO
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  //InputOutput
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //Testcases
  test 
  solve();
  return 0;
}