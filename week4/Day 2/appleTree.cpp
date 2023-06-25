#include <bits/stdc++.h>
using namespace std;

const int N = (int) 1e6+5;
vector<long long> trees(N);
vector<long long> leafs;

void DFS(int src, int par) {
	bool hasChild=false;
	for(auto i:adj[src]){
		if(i==par)continue;
		hasChild=true;
		DFS(i,src);
		leafs[src]+=leafs[i];
	}
	if(!hasChild){
		leafs[src]=1;
	}
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
   		for(int i=0;i<=n;i++){
   			adj[i].clear();
   		}
        while(n--) {
            long long m, k;
            cin >> m >> k;
            trees[m].push_back(k);
            trees[k].push_back(m);
        }

        DFS(1,-1);

        int q;					
        cin >> q;
   		while(q--){
   			int x,y;				
            cin>>x>>y;
   			long long ans=leafs[x]*leafs[y];
   			cout<<ans<<endl;
   		}
        
    }
    
    return 0;
}