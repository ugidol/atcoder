#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<array<int,2>> vec(N,array<int,2>());
	long sm = 0;
	for(int i=0;i<N;i++){
		cin >> vec[i][0] >> vec[i][1];
		sm += vec[i][0];
	}
	long ans = 0;
	for(int i=0;i<N;i++){
		long tmp = sm;
		tmp -= vec[i][0];
		tmp += vec[i][1];
		ans = max(ans,tmp);
	}
	cout << ans << endl;
  return 0;
}
