#include <bits/stdc++.h>
using namespace std;
int main(void){
	int M;
	cin >> M;
	vector<int> tbl = { 1,
                      3,
                      9,
                     27,
                     81,
                    243,
                    729,
                   2187,
                   6561,
                  19683,
                  59049};
	vector<int> ans;
	int v = M;
	while(v>0){
		auto itr = upper_bound(tbl.begin(), tbl.end(),v) - 1;
		ans.push_back( std::distance(tbl.begin(), itr) );
		v -= *itr;
	}
	cout << ans.size() << endl;
	for(auto itr:ans){
		cout << itr << ' ';
	}
	cout << endl;
	return 0;
}
