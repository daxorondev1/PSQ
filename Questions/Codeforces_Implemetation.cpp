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
  unsigned long long int arr[4];
  for(long long int i = 0; i<4; i++)
    cin>>arr[i];

  unsigned long long int flag=0;
  sort(arr,arr+4);
  for(long long int i =0; i<3; i++)
  {
    if(arr[i]==arr[i+1])
      flag++;
  }
  cout<<flag<<" ";
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