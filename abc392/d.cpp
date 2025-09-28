#include <bits/stdc++.h>
using namespace std;
struct dice {
	long long k;
	map<long long,long long> mp;
};
int main(void){
	long long N;
	cin >> N;
	vector<dice> K(N);
	for(int i=0;i<N;i++){
		long long k;
		cin >> k;
		set<long long> st;
		for(int j=0;j<k;j++){
			long long a;
			cin >> a;
			K[i].mp[a] += 1;
		}
		K[i].k = k;
	}
	function<bool(const dice &left, const dice &right)> f = [](const dice &left, const dice &right){
		return left.k < right.k ;
	};
	sort(K.begin(), K.end(), f);
	double ans = 0;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			long long d = ( K[i].k * K[j].k );
			double tmp = 0;
			for(auto [num,cnt0]:K[i].mp){
				if ( K[j].mp.count(num) < 1 ) {
					continue;
				}
				long long cnt1 = K[j].mp[num];
				tmp += ((double)( cnt0 * cnt1 ) / (double)d );
			}
			ans = std::max(ans,tmp);
		}
	}
	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}


