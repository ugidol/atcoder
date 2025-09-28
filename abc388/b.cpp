#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,D;
	cin >> N >> D;
	vector<pair<int,int>> vec(N);
	for(int i=0;i<N;i++){
		int T,L;
		cin >> T >> L;
		pair<int,int> p = make_pair(T,L);
		vec[i] = p;
	}
	for(int k=1;k<=D;k++){
		set<int> st;
		for(int i=0;i<N;i++){
			pair<int,int> p = vec[i];
			st.insert( p.first * ( p.second + k ) );
		}
		auto itr = st.end();
		itr--;
		cout << *itr << endl;
	}
	return 0;
}
