#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S,T;
	cin >> S >> T;
	function<void(vector<string>&,string)> f = [&](vector<string> &stk,string s){
		if ( s == T ) {
			return ;
		}
		set<string> st;
		for(int i=0;i<(int)T.size();i++){
			if ( s[i] == T[i] ) {
				continue;
			}
			string ss(s);
			ss[i] = T[i];
			st.insert(ss);
#ifdef DEBUG
			fprintf(stderr,"[%s]\n",ss.c_str());
#endif
		}
		string ss = *st.begin();
		stk.push_back(ss);
		f(stk,ss);
	};
	vector<string> stk;
	f(stk,S);
	cout << stk.size() << endl;
	for(auto itr:stk){
		cout << itr << endl;
	}
  return 0;
}
