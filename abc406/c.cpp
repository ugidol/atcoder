#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
	int N;
	cin >> N;
	vector<int> P(N);
	for(int i=0;i<N;i++){
		cin >> P[i];
	}
	vector<pair<char,ll>> v;
	for(int i=0;i<N-1;i++){
		if ( P[i] < P[i+1] ) {
			if ( v.empty() || v.back().first == '>' ) {
				v.push_back({'<',1});
			}
			else {
				v.back().second++;
			}
		}
		else {
			if ( v.empty() || v.back().first == '<' ) {
				v.push_back({'>',1});
			}
			else {
				v. back().second++;
			}
		}
	}
#ifdef DEBUG
	for(auto p:v){
		cerr << p.first << ':' << p.second << endl;
	}
#endif
	int sz = ssize(v);
	ll ans = 0;
	for(int i=1;i<sz-1;i++){
		if ( v[i].first == '>' ) {
			ans += v[i-1].second * v[i+1].second;
		}
	}
	cout << ans << endl;
	return 0;
}
