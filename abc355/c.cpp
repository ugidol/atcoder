#include <bits/stdc++.h>
using namespace std;
int f(map<int,int> &mp, set<int> &st){
	int v = -1;
	for(auto itr:st){
		int _v = mp[itr];
		v = max(v, _v);
	}
	return v;
}
int main(void){
	int N,T;
	cin >> N >> T;
	vector<int> A(T);
	set<int> ST;
	map<int,int> mp;
	for(int i=0;i<T;i++){
		cin >> A[i];
		mp[ A[i] ] = i + 1;
		ST.insert(A[i]);
	}
	sort(A.begin(), A.end());
	// A[0] ～ A[T-N] まで
	int ans = (int)1e7;
	bool bingo = false;
	for(int i=0;i<(int)A.size();i++){
		if ( A[i] == 1 ) {
			bool b = true;
			set<int> st;
			st.insert(A[i]);
			for(int j=0;j<N-1;j++){
				if ( ST.find( A[i] + (N + 1) * (j+1) ) == ST.end() ) {
					b = false;
					break;
				}
				st.insert(A[i]+(N+1)*(j+1));
			}
			if ( b ) {
				bingo = true;
				ans = min(ans,f(mp,st));
			}
		}
		if ( A[i] % N == 1 ) {
			bool b = true;
			set<int> st;
			st.insert(A[i]);
			for(int j=0;j<N-1;j++){
				if ( ST.find( A[i] + 1*(j+1) ) == ST.end() ) {
					b = false;
					break;
				}
				st.insert(A[i]+1*(j+1));
			}
			if ( b ) {
				bingo = true;
				ans = min(ans,f(mp,st));
			}
		}
		if ( ( A[i] -1  ) / N == 0 ) {
			bool b2 = true;
			set<int> st2;
			st2.insert(A[i]);
			for(int j=0;j<N-1;j++){
				if ( ST.find( A[i] + N*(j+1) ) == ST.end() ) {
					b2 = false;
					break;
				}
				st2.insert(A[i]+N*(j+1));
			}
			if ( b2 ) {
				bingo = true;
				ans = min(ans,f(mp,st2));
			}
		}
		if ( A[i] == N ) {
			bool b = true;
			set<int> st;
			st.insert(A[i]);
			for(int j=0;j<N-1;j++){
				if ( ST.find( A[i] + (N - 1) * (j+1) ) == ST.end() ) {
					b = false;
					break;
				}
				st.insert(A[i]+(N-1)*(j+1));
			}
			if ( b ) {
				bingo = true;
				ans = min(ans,f(mp,st));
			}
		}
	}
	if ( ! bingo ) {
		ans = -1;
	}
	cout << ans << endl;
  return 0;
}
