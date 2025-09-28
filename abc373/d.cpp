#include <bits/stdc++.h>
using namespace std;
class UF
{
public:
	// 親かどうか(parent[p]==pなら親);
	vector<int> parent;
	// 子の個数
	vector<int> children;
	UF(int sz)
		: parent(sz), children(sz, 0)
	{
		for (int i = 0; i < sz; i++)
		{
			parent[i] = i;
		}
	}
	int find(int n)
	{
		// 親探しループ
		int root = n;
		while (parent[root] != root)
		{
			root = parent[root];
		}
		// 経路圧縮ループ
		int p = n;
		while (parent[p] != p)
		{
			int tmp = p;
			p = parent[p];
			parent[tmp] = root;
		}
		return root;
	}
	bool same(int v1, int v2)
	{
		return (find(v1) == find(v2));
	}
	void unite(int v1, int v2)
	{
		if (same(v1, v2))
		{
			return;
		}
		v1 = find(v1);
		v2 = find(v2);
		if (children[v1] < children[v2])
		{
			parent[v1] = v2;
			children[v2] += children[v1] + 1;
			children[v1] = 0;
		}
		else
		{
			parent[v2] = v1;
			children[v1] += children[v2] + 1;
			children[v2] = 0;
		}
	}
	set<int> groups(){
		set<int> st;
		for(int i=0;i<parent.size();i++){
			if ( i == parent[i] ) {
				st.insert(i);
			}
		}
		return st;
	}
};

vector<vector<int>> W;
vector<long> ans;
vector<vector<int>> g0;
vector<vector<int>> g1;
void dfs(vector<vector<int>>& g, set<int> &visited, int n, int v){
	visited.insert(n);
	if ( ans[n] == LONG_MAX ) {
		ans[n] = v;
	}
	for(auto nn:g[n]){
		if( visited.count(nn) > 0 ) {
			continue;
		}
		dfs(g,visited,nn,ans[n]+W[n][nn]);
	}
	return;
}
int main(void){
	int N,M;
	cin >> N >> M;
	UF uf(N);
	g0 = vector<vector<int>>(N,vector<int>(0));
	g1 = vector<vector<int>>(N,vector<int>(0));
	W = vector<vector<int>>(N,vector<int>(N));
	ans = vector<long>(N,LONG_MAX);
	for(int i=0;i<M;i++){
		int u,v,w;
		cin >> u >> v >> w ;
		u--,v--;
		g0[u].push_back(v);
		g1[v].push_back(u);
		W[u][v] = w ;
		W[v][u] = w * -1 ;
		uf.unite(u,v);
	}

	set<int> st = uf.groups();
	set<int> visited0;
	set<int> visited1;
	for(auto i:st){
		dfs(g0,visited0,i,0);
		dfs(g1,visited1,i,0);
	}
	for(int i=0;i<N;i++){
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}
