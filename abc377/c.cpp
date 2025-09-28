#include <bits/stdc++.h>
using namespace std;
int main(void){
	long N,M;
	cin >> N >> M;
	set<pair<int,int>> st;
	vector<vector<int>> dict = { 
		{2,1},
		{1,2},
		{-1,2},
		{-2,1},
		{-2,-1},
		{-1,-2},
		{1,-2},
		{2,-1}
	};
	for(int i=0;i<M;i++){
		int a,b;
		cin >> a >> b;
		a-=1;
		b-=1;
		pair<int,int> p = make_pair(a,b);
		st.insert(p);
		for(auto itr:dict){
			if ( p.first + itr[0] < 0 ) {
				continue;
			}
			if ( p.first + itr[0] >= N ) {
				continue;
			}
			if ( p.second + itr[1] < 0 ) {
				continue;
			}
			if ( p.second + itr[1] >= N ) {
				continue;
			}
			pair<int,int> pp = make_pair(p.first + itr[0], p.second + itr[1]);
			st.insert(pp);
		}
	}
	long ans = ( N * N ) - st.size() ;
	cout << ans << endl;
#ifdef DEBUG
	/*
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			char c = '.';
			pair<int,int> p = make_pair(i,j);
			if ( st.count(p) > 0 ) {
				c = 'x';
			}
			cout << c;
		}
		cout << endl;
	}
	*/
#endif
	return 0;
}
