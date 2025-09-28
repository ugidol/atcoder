#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<string> S;
	for(int i=0;i<N;i++){
		string s;
		cin >> s;
		S.push_back(s);
	}
	set<string> st;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if ( i == j ) {
				continue;
			}
			st.insert(S[i] + S[j]);
		}
	}
	cout << st.size() << endl;
	return 0;
}
