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
  while(n!=0)
  {
    cout<<"I hate ";
    n--;
    if(n==0)
      break;
    if(n>=1)
      cout<<"that ";
    cout<<"I love ";
    n--;
    if(n>=1)
      cout<<"that ";
    if(n==0)
      break;
  }
  cout<<"it";
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