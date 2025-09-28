#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> wall(N+1,0);
	for(int i=0;i<M;i++){
		int L,R;
		cin >> L >> R ;
		L -= 1;
		wall[L] += 1;
		wall[R] -= 1;
	}
	long ans = M + 1;
	long v = 0;
	for(int i=0;i<N;i++){
		v += wall[i];
		ans = std::min(ans,v);
	}
	cout << ans << endl;
	return 0;
}
