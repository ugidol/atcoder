#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> vec(N);
	for(int i=0;i<N;i++){
		cin >> vec[i];
	}
	std::sort(vec.begin(), vec.end());
	int ans = 0;
	for(int i=0;i<N;i++){
		auto left = vec.begin() + i;
		auto right = std::lower_bound(vec.begin(), vec.end(), vec[i] + M);
		if ( right != vec.begin() ) {
			right = std::prev(right);
		}
		int num = std::distance(left,right)+1;
		ans = std::max(ans,num);
	}
	cout << ans << endl;
	return 0;
}
