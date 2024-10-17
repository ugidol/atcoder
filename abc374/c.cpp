#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<long> K(N);
	for(int i=0;i<N;i++){
		cin >> K[i];
	}
	map<char,long> mp;
	char ary[2] = {'A','B'};
	long ans = (long)2e9+1;
	function<void(int)> dfs = [&](int n){
		if ( n == N ) {
			ans = std::min(ans,std::max(mp['A'],mp['B']));
			return;
		}
#ifdef DEBUG
		fprintf(stderr,"[%02d]%ld,%ld\n",n,mp['A'],mp['B']);
#endif
		for(char c:ary){
			mp[c] += K[n];
			dfs(n+1);
			mp[c] -= K[n];
		}
	};
	dfs(0);
	cout << ans << endl;
	return 0;
}
