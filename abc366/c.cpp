#include <bits/stdc++.h>
using namespace std;
int main(void){
	int Q;
	cin >> Q;
	map<int,int> mp;
	vector<int> ans;
	for(int i=0;i<Q;i++){
		int a;
		cin >> a;
		if ( a == 1 ) {
			int x;
			cin >> x ;
			mp[x] += 1;
		}
		else if ( a == 2 ) {
			int x;
			cin >> x ;
			mp[x] -= 1;
			if ( mp[x] == 0 ) {
				mp.erase(x);
			}
		}
		else {
			ans.push_back(mp.size());
		}
	}
	for(auto itr:ans){
		cout << itr << endl;
	}
  return 0;
}
