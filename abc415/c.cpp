#include <bits/stdc++.h>
using namespace std;
int main(void){
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int n;cin >> n;
		string s; cin >> s;
		//
		set<int> st;
		for(int i=0;i<s.size();i++){
			if ( s[i] == '1' ) {
				st.insert(i+1);
			}
		}
		//
		set<int> paths;
		for(int i=0;i<n;i++){
			paths.insert(std::pow(2,i));
		}
		string ans = "No";
		function<void(int,set<int>)> f = [&](int v, set<int> p){
#ifdef DEBUG
			fprintf(stderr,"v=[%d],",v);
			fprintf(stderr,"(");
			for(auto pp:p){
				fprintf(stderr,"%d,",pp);
			}
			fprintf(stderr,")\n");
#endif
			if ( v <= 0 ) {
				ans = "Yes";
				return ;
			}
			if ( st.find(v) != st.end() ) {
				return ;
			}
			for(auto pp : p){
				p.erase(pp);
				f(v-pp,p);
				p.insert(pp);
			}
		};
		f(std::pow(2,n) - 1,paths);
		cout << ans << endl;
	}
	return 0;
}
