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
  long long int n;
  cin>>n;

  vector <int> vec(n,0);

  long long int a,b;
  cin>>a;
  while(a--)
  {
    cin>>b;
    vec[b-1]=1;
  }
  cin>>a;
  while(a--)
  {
    cin>>b;
    vec[b-1]=1;
  }
  bool flag = true;
  for(int i = 0; i<n; i++)
  {
    if(vec[i]==0)
      flag=false;
  }
  if(flag)
    cout<<"I become the guy.";
  else
    cout<<"Oh, my keyboard!";
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
  //test 
  solve();
  return 0;
}