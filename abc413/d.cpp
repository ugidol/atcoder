#include <bits/stdc++.h>
using namespace std;
string solve(vector<int> &vec){
	int v = gcd(vec[0],vec[1]);
	for(int i=2;i<vec.size();i++){
		v = min(v, gcd(vec[i-1],vec[i]));
	}
	string ans = "Yes";
	for(int i=0;i<vec.size();i++){
		if ( vec[i] % v != 0 ) {
			ans = "No";
			break;
		}
	}
	return ans;
}
int main(void){
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int N;
		cin >> N;
		vector<int> A(N);
		for(int i=0;i<N;i++){
			cin >> A[i];
		}
		string ans = solve(A);
		cout << ans << endl;
	}
	return 0;
}
