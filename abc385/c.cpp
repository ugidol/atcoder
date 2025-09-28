#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	//
	vector<int> H(N);
	map<int,vector<int>> mp;
	for(int i=0;i<N;i++){
		cin >> H[i];
		mp[ H[i] ].push_back(i+1);
	}
	function<int(vector<int>&)> f = [&](vector<int>& vec){
		int ret = 0;
		vector<int> dp(N+1,0);
		for(int i=1;i<N;i++){
			for(auto n:vec){
				if ( n - i <= 0 ) {
					dp[n] = 1;
					continue;
				}
				if ( ret < ( dp[n-i]+1 ) ) {
					ret = dp[n-i]+1;
				}
				dp[n] = dp[n-i] + 1;
				continue;
			}
		}
		return ret;
	};
	//
	int ans = 1;
	for(auto itr:mp){
		vector<int> &v = itr.second;
		ans = max(ans, f(v) );
	}
	cout << ans << endl;
	return 0;
}
