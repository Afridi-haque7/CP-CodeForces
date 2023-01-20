#include<bits/stdc++.h>
using namespace std;

class DSU{
	private:
		vector<int> size, parent;
	public:
		DSU(int n){
			size.resize(n+1, 0);
			parent.resize(n+1);
			for(int i = 0; i <= n; i++){
				parent[i] = i;
			}
		}
		
		int findUltParent(int node){
			if(node == parent[node])
				return node;
			return parent[node] = findUltParent(parent[node]);
		}
		
		void unionBySize(int u, int v){
			int ult_pu = findUltParent(u);
			int ult_pv = findUltParent(v);
			if(ult_pu == ult_pv)	return;
			
			if(size[ult_pu] < size[ult_pv]){
				parent[ult_pu] = ult_pv;
				size[ult_pv] += size[ult_pu];
			}
			else{
				parent[ult_pv] = ult_pu;
				size[ult_pu] += size[ult_pv];
			}
		}
};
