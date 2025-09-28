#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	int ans = 0;
	while(A.size()>0){
		set<int> st;
		for(int i=0;i<M;i++){
			st.insert(i+1);
		}
		for(int i=0;i<(int)A.size();i++){
			st.erase(A[i]);
		}
		if ( st.size() > 0 ) {
			break;
		}
		A.pop_back();
		ans += 1;
	}
	cout << ans << endl;
	return 0;
}
