#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> W(N);
	vector<multiset<int>> vec(N);
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		A[i] = a - 1;
	}
	for(int i=0;i<N;i++){
		int w;
		cin >> w;
		vec[ A[i] ].insert(w);
	}
	int ans = 0;
	for(int i=0;i<N;i++){
		multiset<int> &st = vec[i];
		while(st.size() > 1 ) {
			int v = *st.begin();
			st.erase( st.find(v) );
			ans += v;
		}
	}
	cout << ans << endl;
	return 0;
}
