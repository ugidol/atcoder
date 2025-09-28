#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	map<int,vector<int>> mp;
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		mp[a].push_back(i);
	}
	int ans = -1;
	if ( mp.size() == N ) {
		cout << ans << endl;
		return 0;
	}
	ans = INT_MAX;
	for(auto itr:mp){
		vector<int> &v = itr.second;
		if ( v.size() <= 1 ) {
			continue;
		}
		for(int i=1;i<v.size();i++){
			ans = min(ans, v[i]-v[i-1]+1);
		}
	}
	cout << ans << endl;
	return 0;
}
