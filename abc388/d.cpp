#include <bits/stdc++.h>
using namespace std;
struct DATA {
	int a;
	int receive;
	int give;
	int result;
};
int main(void){
	int N;
	cin >> N;
	vector<DATA> vec(N);
	set<pair<int,int>> st;
	for(int i=0;i<N;i++){
		cin >> vec[i].a;
		while( ! st.empty() ) {
			auto top = st.begin();
			if ( top.first 
		}
		vec[i].receive = min(i,(int)st.size());
		vec[i].give    = min(N-(i+1), (vec[i].a + vec[i].receive));
		vec[i].result = vec[i].a + vec[i].receive - vec[i].give;
		st.insert( make_pair( vec[i].a + vec[i].receive, i) );
	}
	return 0;
}
