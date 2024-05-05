#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	vector<pair<int,int>> P(N);
	for(int i=0;i<N;i++){
		int p ;
		cin >> p;
		int q = i;
		P[i] = make_pair(p,q);
	}
	sort(P.begin(), P.end());
	set<int> st;
	for(int i=0;i<K;i++){
		int v = P[i].second;
		st.insert(v);
	}
	function<long(void)> f = [&](void){
		long mx = *st.rbegin();
		long mn = *st.begin();
		return (mx-mn);
	};
	long ans = f();
	for(int i=K;i<N;i++){
		long left = P[i-K].second;
		long right = P[i].second;
		st.erase(left);
		st.insert(right);
		ans = min(ans,f());
	}
	cout << ans << endl;
  return 0;
}
