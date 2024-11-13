
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	string S(N+2,'X');
	for(int i=0;i<N;i++){
		cin >> S[i+1];
	}
	int num = 0;
	vector<int> vec;
	for(int i=1;i<=N+1;i++){
		if ( S[i] == 'X' ) {
			vec.push_back(num);
			num = 0;
		}
		else {
			num += 1;
		}
	}
	int ans = 0;
	for(int i=0;i<vec.size();i++){
		if ( vec[i] < K ) {
			continue;
		}
		ans += vec[i] / K ;
	}
	cout << ans << endl;
	return 0;
}
