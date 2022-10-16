#include <bits/stdc++.h>
using namespace std;
#define test long long int t; cin>>t; while(t--)

int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
     #endif

        // pair<int,int> a({10,20});
        // cout<<a.first<<" "<<a.second;

        unordered_map<string,int> umap;

        umap.insert({"Mango",100});
		umap.insert({"Apple",120});
		umap.insert({"Kiwi",140});
		umap.insert({"PineApple",160});

		int ts = umap.bucket_count();
		for(auto x : umap)
		{
			cout<<x.first<<", "<<x.second<<endl;
		}
		//ForLoop
		for(int i = 0; i<ts; i++)
		{
			cout<<i<<"-->";
			for(auto it = umap.begin(); it!=umap.end(); it++)
			{
				cout<<it.first<<" "<<it.second<<" ";
			}
			cout<<endl;
		}

		return 0;
}