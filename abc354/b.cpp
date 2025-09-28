#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;

	map<string,int> mp;
	long T = 0;;
	for(int i=0;i<N;i++){
		string S;
		cin >> S;
		int C;
		cin >> C;
		mp[S] = C;
		T += C;
	}
	int i=0;
	string ans = "";
	for(auto itr:mp){
		if ( T % N == i ) {
			ans = itr.first;
		}
		i++;
	}
	cout << ans << endl;
  return 0;
}
