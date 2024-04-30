#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<set<int>> vec(M);
	for(int i=0;i<M;i++){
		int C;
		cin >> C;
		set<int> st;
		for(int j=0;j<C;j++){
			int a;
			cin >> a;
			st.insert(a);
		}
		vec[i] = st;
	}
	int ans = 0;
	function<void(list<set<int>>&list,int)> dfs = [&](list<set<int>>&list,int v){
		if ( v == M ) {
			set<int> st;
			for(auto itr:list){
				set<int> st2 = itr;
				for(auto itr2:st2){
					st.insert(itr2);
				}
			}
			if ( st.size() == N ) {
				ans += 1;
			}
			return ;
		}
		dfs(list,v+1);
		set<int> st = vec[v];
		list.push_back(st);
		dfs(list,v+1);
		list.pop_back();
		return;
	};
	list<set<int>> list;
	dfs(list,0);
	cout << ans << endl;
  return 0;
}
