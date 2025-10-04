#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,Q;
	cin >> N >> Q;
	map<int,int> mp;
	for(int i=1;i<=N;i++){
		mp[i] = 1;
	}
	for(int i=0;i<Q;i++){
		int X,Y;
		cin >> X >> Y;
		int ans = 0;
		vector<int> vec;
		for(auto itr:mp){
			if ( X < itr.first ) {
				break;
			}
			vec.push_back(itr.first);
			ans += itr.second;
		}
		cout << ans << endl;
		mp[Y] += ans;
		for(auto itr:vec){
			mp.erase(itr);
		}
	}
	return 0;
}

