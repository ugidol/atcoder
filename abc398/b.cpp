#include <bits/stdc++.h>
using namespace std;
int main(void){
	map<int,int> mp;
	for(int i=0;i<7;i++){
		int a;
		cin >> a;
		mp[a] += 1;
	}
	vector<int> vec;
	for(auto itr:mp){
		vec.push_back(itr.second);
	}
	sort(vec.begin(), vec.end());
	string ans = "No";
	if ( vec[ vec.size() - 1 ] >= 3 && vec[ vec.size() - 2 ] >= 2 ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
