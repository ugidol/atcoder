#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S;
	cin >> S;
	map<char,int> mp;
	for(int i=0;i<(int)S.size();i++){
		mp[S[i]] += 1;
	}
	int mx = -1;
	for(auto itr:mp){
		mx = max(mx,itr.second);
	}

	for(auto itr:mp){
		if ( itr.second == mx ) {
			cout << itr.first << endl;
			break;
		}
	}
  return 0;
}
