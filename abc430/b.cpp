#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<string> S(N);
	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	set<string> st;
	for(int i=0;i<(N-M+1);i++){
		for(int j=0;j<(N-M+1);j++){
			string s;
			for(int ii=0;ii<M;ii++){
				for(int jj=0;jj<M;jj++){
					s.push_back(S[i+ii][j+jj]);
				}
			}
			#ifdef DEBUG
			cerr << s << endl;
			#endif
			st.insert(s);
		}
	}
	cout << st.size() << endl;
	return 0;
}
