#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	int ans = M;
	for(int bit=0;bit<(1<<N);bit++){
		set<int> st;
		int tmp = 0;
		for(int i=0;i<N;i++){
			if ( bit & (1<<i) ) {
				for(int j=0;j<M;j++){
					if ( S[i][j]=='o' ) {
						st.insert(j);
					}
				}
				tmp += 1;
			}
		}
		if ( st.size() == M ) {
			ans = min(ans,tmp);
		}
	}
	cout << ans << endl;
  return 0;
}
