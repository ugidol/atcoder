#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	vector<int> scores(N);
	for(int i=0;i<M;i++){
		map<char,int> mp;
		for(int j=0;j<N;j++){
			char c = S[j][i];
			mp[c] += 1;
		}
		char min = '0';
		if ( mp['0'] > mp['1'] ) {
			min = '1';
		}
#ifdef DEBUG
		cerr << "min:" << min << endl;
#endif
		for(int j=0;j<N;j++){
			if ( S[j][i] == min ) {
				scores[j] += 1;
			}
		}
	}
	int max = *std::max_element(scores.begin(), scores.end());
#ifdef DEBUG
	cerr << "max:" << max << endl;
#endif
	vector<int> ans ;
	for(int i=0;i<N;i++){
		if ( scores[i] == max ) {
			cout << (i+1) << ' ';
		}
	}
	cout << endl;
}
