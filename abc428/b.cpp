#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K;
	string S;
	cin >> S;
	map<string,int> mp;
	int mx = 0;
	for(int i=0;i<=N-K;i++){
		string t = S.substr(i,K);
#ifdef DEBUG
		cerr << '[' << t << ']' << endl;
#endif
		mp[t] += 1;
		mx = std::max(mx,mp[t]);
	}
	cout << mx << endl;
	set<string> ans;
	for(auto itr:mp){
		if ( itr.second == mx ) {
			ans.insert(itr.first);
		}
	}
	for(auto itr : ans ) {
		cout << itr << ' ';
	}
	cout << endl;
	return 0;
}
