#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	string S;
	cin >> S;
	sort(S.begin(),S.end());
	set<string> st;
	int ans = 0;
	do {
		// 探索済みの文字列は判定不要
		if ( st.find(S) != st.end() ) {
			continue;
		}
		//cout << S << endl;
		bool bb = false;
		for(int i=0;i<N-(K-1);i++){
			// 回文かどうかCheck
			bool b = true;
			int left = i;
			int right = i + (K-1);
			for(int j=0;j<(K/2);j++){
				if ( S[left+j] != S[ right-j ] ) {
					b = false;
					break;
				}
			}
			// 回文だったらもういい
			if ( b ) {
				bb = true;
				break;
			}
		}
		// 回文を含まなかったらans+=1;
		if ( ! bb ) {
			ans += 1;
		}
		st.insert(S);
	}while(next_permutation(S.begin(), S.end()));
	cout << ans << endl;
  return 0;
}
