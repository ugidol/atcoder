#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	map<char,int> mp;
	int ans = 0;
	for(int i=0;i<N;i++){
		int A;
		cin >> A;
		char S;
		cin >> S;
		if ( mp.count(S) == 0 ) {
			;
		}
		else {
			int v = abs(mp[S]-A);
			ans += v;
		}
		mp[S] = A;
	}
	cout << ans << endl;
  return 0;
}
