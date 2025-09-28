#include <bits/stdc++.h>
using namespace std;
int main(void){
	int T;cin >> T;
	for(int i=0;i<T;i++){
		int N; cin >> N;
		vector<int> vec;
		for(int i=0;i<N;i++){
			int v;cin >> v;
			vec.push_back(v);
		}
		int s1 = vec[0];
		int sn = vec[vec.size()-1];
		std::sort(vec.begin(), vec.end(), std::greater<int>());

		int ans = 1;
		while(true){
			int m = s1 * 2 ;
			auto itr = std::lower_bound(vec.begin(), vec.end(), m, std::greater<int>());
			if ( itr == vec.end() ) {
				break;
			}
			if ( *itr <= s1 ) {
				ans = -1;
				break;
			}
			ans += 1;
			if ( *itr < sn ) {
				s1 = *itr;
				continue;
			}
			break;
		}

		cout << ans << endl;
	}
	return 0;
}
